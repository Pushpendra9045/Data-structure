#include<iostream>
using namespace std;
int longestSubArray(bool a[],int n)
{
    int res=0;
    
    for(int i=0;i<n;i++)
    {
      int count1=0,count2=0;
      for(int j=i;j<n;j++)
      {
        if(a[j]==0)
        count1++;
        else
        count2++;
        if(count1==count2)
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
    bool a[n];
    cout<<"Enter element of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<longestSubArray(a,n)<<endl;

}