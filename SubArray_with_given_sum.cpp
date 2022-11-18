#include<iostream>
#include<unordered_set>
using namespace std;
bool isSubarray(int a[],int n,int k)
{
    unordered_set<int>h;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        
        if(h.find(pre_sum)!=h.end())
        return true;
        if(pre_sum==k)
        return true;
        h.insert(pre_sum);
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
    int k;
    cout<<"Enter sum of subarray "<<endl;
    cin>>k;
    cout<<isSubarray(a,n,k);
    
}