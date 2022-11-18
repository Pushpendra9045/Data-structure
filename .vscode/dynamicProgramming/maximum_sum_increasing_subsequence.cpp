// Program to find the maximum sum of increasing subsequence//
#include<iostream>
using namespace std;
int findMaximum_Sum_of_increasing_subseqence(int arr[],int n)
{
    int maxiSum[n];
    for(int i=0;i<n;i++)
    {
      maxiSum[i]=arr[i];
      for(int j=0;j<i;j++)
      {
        if(arr[j]<arr[i])
        maxiSum[i]=max(maxiSum[i],arr[i]+maxiSum[j]);
      }
    }
 int res=maxiSum[0];
 for(int i=0;i<n;i++)
 {
    res=max(maxiSum[i],res);
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
   cout<<findMaximum_Sum_of_increasing_subseqence(arr,n)<<endl;

}