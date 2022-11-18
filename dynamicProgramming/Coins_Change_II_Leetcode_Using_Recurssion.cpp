#include<iostream>
using namespace std;
int finCoinsCombination(int coins[],int n,int k)
{
    if(k==0)
    return 1;
    if(n==0)
    return 0;
 int res= finCoinsCombination(coins,n-1,k);
  if(coins[n-1]<=k)
  res+=finCoinsCombination(coins,n,k-coins[n-1]);
 return res;
}
int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int coins[n];
    cout<<"Enter coins present in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    int amount;
    cout<<"Enter amount for which you want to calculate combinattion of coins "<<endl;
    cin>>amount;
    cout<<finCoinsCombination(coins,n,amount)<<endl;
    return 0;

}