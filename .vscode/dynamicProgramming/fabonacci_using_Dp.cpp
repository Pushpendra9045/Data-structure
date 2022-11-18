// Program to calcuate fabonacci using Dynamic Programming By tabulaated method//
#include<iostream>
using namespace std;
int findFibonacci(int n)
{
    int f[n+2];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
    f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
int main()
{
    int n;
    cout<<"Enter number of term  "<<endl;
    cin>>n;
    cout<<findFibonacci(n)<<" "<<endl;


}