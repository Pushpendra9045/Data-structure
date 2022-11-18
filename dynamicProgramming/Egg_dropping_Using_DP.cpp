#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int res(int egg,int Floor)
{
    int dp[Floor+1][egg+1];
    for(int i=0;i<=egg;i++)
    {
       dp[1][i]=1;
       dp[0][i]=0;
    }
    for(int j=1;j<=Floor;j++)
    {
        dp[j][1]=j;
    }
    for(int i=2;i<=Floor;i++)
    {
        for(int j=2;j<=egg;j++)
        {
            dp[i][j]=INT_MAX;
            for(int x=1;x<=i;x++)
            dp[i][j]=min(dp[i][j],1+max(dp[x-1][j-1],dp[i-x][j]));
        }
    }
    return dp[Floor][egg];
}

int main()
{
    int Egg,Floor;
    cout<<"Enter number of floor "<<endl;
    cin>>Floor;
    cout<<"Enter number of Egg "<<endl;
    cin>>Egg;
    cout<<res(Egg,Floor)<<endl;

}