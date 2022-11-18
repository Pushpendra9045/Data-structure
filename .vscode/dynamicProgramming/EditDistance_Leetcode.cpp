// Program to calculate the minimum number  operation like insert,delete,
//replace for converging one string into another string 
//by doing such minimum operation.//
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
int minimum(int n,int m,int x)
{
    if(x<=m && x<=n)
    return x;
    if(n<=x && n<=m)
    return n;
    else
    {
        return m;
    }

}
using namespace  std;
int EditDistance(string s1,string s2,int m,int n)
{
    if(m==0)
    return n;
    if(n==0)
    return m;
    if(s1[m-1]==s2[n-1])
    {
     return EditDistance(s1,s2,m-1,n-1);
    }
    else
    {
     return 1+minimum(EditDistance(s1,s2,m,n-1),EditDistance(s1,s2,m-1,n),EditDistance(s1,s2,m-1,n-1));
    }
   
}
int main()
{
    string s1,s2;
    cout<<"Enter first strinng "<<endl;
    cin>>s1;
    cout<<"Enter second string "<<endl;
    cin>>s2;
    int m=s1.length();
    int n=s2.length();
    cout<<EditDistance(s1,s2,m,n)<<endl;

}