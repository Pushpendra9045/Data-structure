#include<iostream>
using namespace std;
bool isSubarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         int currSum=0;
        for(int j=i;j<n;j++)
        {
            currSum+=a[j];
        if(currSum==0)
        return true;
        }
    }
    return false;
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
    cout<<isSubarray(a,n);
    
}