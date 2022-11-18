#include<iostream>
#include<algorithm>
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
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]!=a[i+1])
       sum=sum+a[i];
    }
    cout<<sum<<endl;
}
