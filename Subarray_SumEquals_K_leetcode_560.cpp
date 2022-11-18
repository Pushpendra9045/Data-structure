#include<iostream>
using namespace std;
int counSubArrayWithGivenSum(int a[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int currSum=0;
        for(int j=i;j<n;j++)
        {
            currSum+=a[i];
            if(currSum==k)
             {
                count++;
             }
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter element of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter sum of sub array  "<<endl;
    cin>>k;
    cout<<counSubArrayWithGivenSum(a,n,k)<<endl;
    return 0;

}