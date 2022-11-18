#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    //function to insert element 
    s.insert(10);
    s.insert(23);
    s.insert(34);
    s.insert(45);
    s.insert(46);
    for(int x:s)
    cout<<x<<" "<<endl;
    cout<<s.size()<<endl;
    //function to erase element 
    s.erase(23);
    cout<<s.size()<<endl;
    //function to find element is present or not
    if(s.find(45)==s.end())
    cout<<"Element is not found "<<endl;
    else
    cout<<"Element is present "<<endl;
    //function to count only in 1 or 0.
    cout<<s.count(46)<<endl;
    return 0;
}

