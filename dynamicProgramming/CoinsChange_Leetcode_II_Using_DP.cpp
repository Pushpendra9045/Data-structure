#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int findCoinCombination(int coins[],int n,int amount)
{
    int dp[amount+1][n+1];
    for(int i=0;i<=n;i++)
    {
        dp[0][i]=1;
    }
    for(int i=1;i<=amount;i++)
    {
        dp[i][0]=0;
    }
    for(int i=1;i<=amount;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=dp[i][j-1];
            if(coins[j-1]<=i)
            dp[i][j]+=dp[i-coins[j-1]][j];
        }
    }
    return dp[amount][n];
}
int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int coins[n];
    cout<<"Enter coins present in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    int amount;
    cout<<"Enter amount for which you want to calculate combinattion of coins "<<endl;
    cin>>amount;
    cout<<findCoinCombination(coins,n,amount)<<endl;
    return 0;
}