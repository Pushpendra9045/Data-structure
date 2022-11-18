// Program to calculate the minimum number of coin to make a given value //
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int findMinimumCoin(int a[],int n,int k)
{
    int res=0;
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            int c=floor(k/a[i]);
            res=res+c;
            k=k-(c*a[i]);
        }
        if(k==0)
        break;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter element of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter ammount for which you want to calculate minimum number of coin "<<endl;
    cin>>k;
    cout<<findMinimumCoin(a,n,k);
    return 0;

}