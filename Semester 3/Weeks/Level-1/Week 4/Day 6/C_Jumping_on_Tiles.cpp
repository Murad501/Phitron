#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char first = s[0];
        char last = s[s.size() - 1];
        map<char, set<int>> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]].insert(i + 1);
        }

        int cost = 0;
        vector<int> steps;
        if (first == last)
        {
            auto it = *mp.find(first);

            for (auto v : it.second)
            {
                steps.push_back(v);
            }
        }
        else if (first < last)
        {
            auto it = mp.find(first);
            while (true)
            {
                for (auto v : it->second)
                {
                    steps.push_back(v);
                }

                if (it->first != first)
                {
                    auto previous = mp.find(it->first);
                    previous--;
                    cost += it->first - previous->first;
                }
                if (it->first == last)
                {
                    break;
                }
                it++;
            }
        }
        else
        {
            auto it = mp.find(first);
            while (true)
            {
                for (auto v : it->second)
                {
                    steps.push_back(v);
                }

                if (it->first != first)
                {
                    auto next = mp.find(it->first);
                    next++;
                    cost += next->first - it->first;
                }
                if (it->first == last)
                {
                    break;
                }
                it--;
            }
        }

        cout << cost << " " << steps.size() << endl;
        for (auto x : steps)
        {
            cout << x << " ";
        }
        cout << nl;
    }

    return 0;
}