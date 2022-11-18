#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>map;
    map["gfg"]=23;
    map["kvch"]=34;
    map["Arb"]=45;
    map.insert({"BHK",56});
    for(auto x:map)
    cout<<x.first<<" "<<x.second<<endl;
    cout<<map.size()<<endl;
    // function to check given key having  a value      
    if(map.find("gfg")!=map.end())
    cout<<"element is found "<<endl;
    else
    cout<<"Element is not present "<<endl;
    // how to iterarte unordered map
    for(auto it=map.begin();it!=map.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
    map.erase("gfg");
    map.erase("kvch");
    cout<<map.size()<<endl;
    return 0;

}