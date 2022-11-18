#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int EditDistance(string s1,string s2,int m,int n,vector<vector<int>>& dp)
{
   if(m == 0) return dp[m][n] = n;
        if(n == 0) return dp[m][n] = m;
        if(dp[m][n] != -1)
            return dp[m][n];
        if(s1[m-1] == s2[n-1]) 
            return dp[m][n] = EditDistance(s1, s2, m-1, n-1, dp);
        else{
            int insert = EditDistance(s1, s2, m, n-1, dp);
            int Delete = EditDistance(s1, s2, m-1, n, dp);
            int replace = EditDistance(s1, s2, m-1, n-1, dp);
            
            return dp[m][n] = 1 + min({insert, Delete, replace});
        }
}
int main()
{
    string s1,s2;
    cout<<"Enter first strinng "<<endl;
    cin>>s1;
    cout<<"Enter second string "<<endl;
    cin>>s2;
    int m=s1.length();
    int n=s2.length();
     vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        cout<<EditDistance(s1, s2, m, n, dp)<<endl;

}