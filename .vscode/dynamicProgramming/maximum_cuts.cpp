#include<iostream>
#include <algorithm>
using namespace std;
int maximum(int x,int y,int z)
{
    if(x>y && x>z)
    return x;
    if(y>x && y>z)
    return y;
    else
    return z;
}
int find_maximum_cuts(int n,int a,int b,int c)
{
    if(n<0)
    return -1;
    if(n==0)
    return 0;
    int res=maximum(find_maximum_cuts(n-a,a,b,c),find_maximum_cuts(n-b,a,b,c),find_maximum_cuts(n-c,a,b,c));
    if(res==-1)
    return res;
    else
    return res+1;
}
int main()
{
    int n;
    cout<<"Enter length of rod "<<endl;
    cin>>n;
    int a,b,c;
    cout<<"Enter sizes of the every piece "<<endl;
    cin>>a>>b>>c;
    cout<<find_maximum_cuts(n,a,b,c)<<endl;

}