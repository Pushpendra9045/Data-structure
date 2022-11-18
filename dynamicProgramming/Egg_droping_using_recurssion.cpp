#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int max(int a,int b)
{
    return (a > b) ? a : b;
}
int eggDrop(int n, int k)
{
    if (k == 1 || k == 0)
        return k;
    if (n == 1)
        return k;
 
    int min = INT_MAX, x, res;
    for (x = 1; x <= k; x++) {
        res = max(
            eggDrop(n - 1, x - 1),
            eggDrop(n, k - x));
        if (res < min)
            min = res;
    }
 return min + 1;
}
int main()
{
    int Egg,Floor;
    cout<<"Enter number of floor "<<endl;
    cin>>Floor;
    cout<<"Enter number of Egg "<<endl;
    cin>>Egg;
    cout<<eggDrop(Egg,Floor)<<endl;

}
// Due to time out it give no output on large number of floor//
// like floor=36 egg=2 it not give any response due to time out //