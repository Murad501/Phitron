#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    // mp.insert({10, 20});
    // mp.insert({2, 20});
    // mp.insert({3, 12});
    mp[10] = 20;
    mp[10] = 12;
    mp[2] = 2;
    mp[23] = 13;
    mp[34] = 32;
    mp[123] = 54;
    // cout<<mp[10]<<'\n';
    // // cout<<mp[3]<<'\n';
    // cout<<mp[2]<<'\n';

    // for(auto [key, value]:mp){
    //     cout<<key<<" -> "<<value<<'\n';
    // }

    // auto it = mp.find(76);
    // if (it == mp.end())
    // {
    //     cout << "Element not found\n";
    // }
    // else
    // {

    //     cout << it->second << '\n';
    // }

    for (auto it : mp)
    {
        int key = it.first, value = it.second;
        cout << key << " -> " << value << '\n';
    }

    auto it = mp.lower_bound(10);
    // auto it = mp.upper_bound(10);
    cout<<it->first<<" -> " << it->second<<'\n';

    return 0;
}