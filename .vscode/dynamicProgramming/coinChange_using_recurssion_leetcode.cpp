#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int findMinimumCoin(int coins[],int n,int amount)
{
    if(amount==0)
    return 0;
    int res=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(coins[i]<=amount)
        {
        int temp=findMinimumCoin(coins,n,amount-coins[i]);
        if(temp!=INT_MAX)
        res=min(res,temp+1);
        }
    }
    return res;

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