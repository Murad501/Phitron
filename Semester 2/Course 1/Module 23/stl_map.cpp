#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"Shakib", 75});
    mp.insert({"Tamim", 19});
    mp.insert({"Shamim", 79});
    mp.insert({"akib", 0}); 
    mp["Murad"] = 21;

    // for(auto it=mp.begin(); it!=mp.end(); it++){
    //     cout<<it->first<<endl;
    // }

    // cout<<mp["Shamim"]<<endl;
    if(mp.count("Murad")){
        cout<<"Ase";
    }else{
        cout<<"Nai";
    }
    return 0;
}