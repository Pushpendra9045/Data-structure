#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int>h;
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element of an array  "<<endl;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    for(int x:arr)
    h[x]++;
    for(auto e:h)
    cout<<e.first<<" "<<e.second<<endl;
    return 0;               
}
