#include<iostream>
using namespace std;
int longest_subArray(int a[],int n,int k)
{
   int res=0;
   for(int i=0;i<n;i++)
   {
    int currSum=0;
    for(int j=i;j<n;j++)
    {
        currSum+=a[j];
        if(currSum==k)
        res=max(res,j-i+1);
    }
   }
   return res;
}
int main()
{
    int n;
    cout<<"Enter size of the array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter element of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter sum of subArray of which you want to calculate size "<<endl;
    cin>>k;
    cout<<longest_subArray(a,n,k)<<endl;
}
