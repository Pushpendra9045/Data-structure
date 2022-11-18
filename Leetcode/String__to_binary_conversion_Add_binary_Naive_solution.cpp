#include<iostream>
#include<bits/stdc++.h>
#include <typeinfo>
#include<cstring>
using namespace std;
int convertTo_digit(string nums1,string nums2)
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
   int add=res1+res2;
    int binary = 0, remainder, product = 1;
  // Since the data type is int, it can only accept values up to 1023 before switching to long.
  while (add != 0) {
    remainder = add % 2;
    binary = binary + (remainder * product);
    add = add / 2;
    product *= 10;
  }
  return binary;
 
}
int main()
{
    string nums1,nums2;
    cout<<"Enter first string "<<endl;
    cin>>nums1;
    cout<<"Enter second string "<<endl;
    cin>>nums2;

    cout<<convertTo_digit(nums1,nums2)<<endl;
    cout<<typeid(convertTo_digit(nums1,nums2)).name()<<endl;

}