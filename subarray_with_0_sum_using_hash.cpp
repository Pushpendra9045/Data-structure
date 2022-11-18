#include<iostream>
#include<unordered_set>
using namespace std;
bool is0Sum(int a[],int n,int k)
{
  unordered_set<int>h;
  int pre_Sum=0;
  for(int i=0;i<n;i++)
  {
    pre_Sum+=a[i];
    if(h.find(pre_Sum)!=h.end())
    return true;
    if(pre_Sum==0)
    return true;
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
    cout<<"Enter sum of sub array  "<<endl;
    cin>>k;
    cout<<is0Sum(a,n,k)<<endl;

}