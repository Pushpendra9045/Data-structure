#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter element of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int ans=0;
        for(int j=0;j<n;j++)
        if(a[i]==a[j])
        {
            ans+=1;
        }
        if(ans<2)
        {
            sum=sum+a[i];
        }
    }
    cout<<sum<<endl;
}
