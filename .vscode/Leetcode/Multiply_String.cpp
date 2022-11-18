#include<iostream>
#include<bits/stdc++.h>
#include <typeinfo>
#include<cstring>
using namespace std;
string convertTo_digit(string nums1,string nums2)
{
   int n=nums1.length();
   int m=nums2.length(); 
   int res1=0;
   int res2=0;
   //converting first string into integr;//
   for(int i=0;i<n;i++)
   {
    int n1=nums1[i]-'0';
    res1=res1*10+n1;
   }
   for(int i=0;i<m;i++)
   {
    int n2=nums2[i]-'0';
    res2=res2*10+n2;
   }
   // now multiply both string//
   int muliply=res1*res2;
  string str=to_string(muliply); 
  return str;
}
int main()
{
    string nums1,nums2;
    cout<<"Enter first string "<<endl;
    cin>>nums1;
    cout<<"Enter second string "<<endl;
    cin>>nums2;
    string result =convertTo_digit(nums1,nums2);
    cout<<result<<endl;
    cout<<typeid(result).name()<<endl;

}