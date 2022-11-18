// Program to find longest common subsequence using Dp in tabulated form.//
#include<iostream>
using namespace std;
int fun_tab(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    for(int i = 0; i<= n;i++)
    {
        for(int j = 0; j <= m; j++)
        {
             // dp[i][j] = 0;
              if(i == 0 or j == 0) dp[i][j] = 0;
        }
    }
    
    for(int i = 1; i<= n;i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}
int main()
{
    string s1,s2;
    cout<<"Enter first string "<<endl;
    cin>>s1;
    cout<<"Enter Second string "<<endl;
    cin>>s2;
    int n=s1.length();
    int m=s2.length();
    cout<<fun_tab(s1,s2,n,m)<<endl;
    
}
// Time complexity is O(mn);//