#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
  static bool comp(pair<int,int>a,pair<int,int>b)
    {
        if(a.second==b.second)
        return a.first<b.first;
        return a.second<b.second;
    }
int findActivitySelection(int start_time[],int end_time[],int n)
{
    vector<pair<int,int>>v(n); //here we are making the pair of start time and start time like this {(1,2),(3,4),{5,6}}//
    for(int i=0;i<n;i++)
    v[i]={start_time[i],end_time[i]};
    sort(v.begin(),v.end(),comp);
    int i=0;
    int j=1; // because first activity is always our answer //
    int count=1;  // this will store the count of activity selected //
    while(j<n)
    {
        if(v[i].second<v[j].first)
        {
            count++;
            i=j;
            j++;
        }
        else
        {
            j++;
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter size of acitivity "<<endl;
    cin>>n;
    int start_time[n];
    int end_time[n];
    cout<<"Enter start time of activity "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>start_time[i];
    }
    cout<<"Enter end time of the activity "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>end_time[i];
    }
    cout<<findActivitySelection(start_time,end_time,n)<<endl;
    return 0;

}