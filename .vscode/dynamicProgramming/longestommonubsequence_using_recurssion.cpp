// Program to find the longest common subsequence using Dp in tabulated form//
#include<iostream>
using namespace std;
int findLongestCommomnSubsequnce(string s1,string s2,int m,int n)
{
    if(m==0 || n==0)
    return 0;
    if(s1[m-1]==s2[n-1])
    return 1+findLongestCommomnSubsequnce(s1,s2,m-1,n-1);
    else
    return max(findLongestCommomnSubsequnce(s1,s2,m-1,n),findLongestCommomnSubsequnce(s1,s2,m,n-1));
}
int main()
{
     string s1,s2;
    cout<<"Enter first string "<<endl;
    cin>>s1;
    cout<<"Enter Second string "<<endl;
    cin>>s2;
    int m=s1.length();
    int n=s2.length();
    cout<<findLongestCommomnSubsequnce(s1,s2,m,n)<<endl;
}
// Time complexity is O(n^2)//