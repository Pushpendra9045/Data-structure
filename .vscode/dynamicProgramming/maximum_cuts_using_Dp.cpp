#include<iostream>
#include<algorithm>
using namespace std;
int find_maximum_cuts(int n,int a,int b,int c)
{
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
      dp[i]=-1;
      if(i-a>=0)
      dp[i]=max(dp[i],dp[i-a]);
      if(i-b>=0)
      dp[i]=max(dp[i],dp[i-b]);
      if(i-c>=0)
      dp[i]=max(dp[i],dp[i-c]);
      if(dp[i]!=-1)
      dp[i]++;
      // We can remove this as our need because if we need no match answer 0 then 
      //add below condition if(dp[n]==-1){dp[n]=0;} otherwise remove . After removing 
      //thsi condition we get -1 on no match.//
      if(dp[n]==-1)
      {
        dp[n]=0;
      }
    }
    return dp[n];
}
int main()
{
    int n;
    int t=3;
    cout<<"Enter length of rod "<<endl;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<find_maximum_cuts(n,a,b,c)<<endl;
    
}