// Program  to find minimum number of coins to make a given value using Dynamic programminng //
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int findMinimumCoin(int coins[],int n,int amount)
{
    int dp[amount+1];
    dp[0]=0;
    for(int i=0;i<=amount;i++)
      dp[i]=INT_MAX;
      for(int i=1;i<=amount;i++)
      {
        for(int j=0;j<n;j++)
        {
           if(coins[j]<=i)
           {
           int temp=dp[i-coins[j]];
           if(temp!=INT_MAX)
           dp[i]=min(dp[i],temp+1);
           
           }
          

        }
      }
      return dp[amount];


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
    cout<<findMinimumCoin(coins,n,amount)<<endl;
    return 0;
}