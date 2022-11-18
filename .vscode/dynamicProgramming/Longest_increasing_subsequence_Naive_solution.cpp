// Program to find the length of longest increasing subsequence//
#include<iostream>
using namespace std;
int findLongest_Increasing_subsequence(int arr[],int n)
{
    int lis[n];
    lis[0]=1;
    for(int i=1;i<n;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
            lis[i]=max(lis[j]+1,lis[i]);
        }
    }
    int res=lis[0];
    for(int i=0;i<n;i++)
    {
        res=max((res),lis[i]);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findLongest_Increasing_subsequence(arr,n)<<endl;

}