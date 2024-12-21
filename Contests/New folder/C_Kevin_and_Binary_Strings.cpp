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
        int mostZeros = 0;
        int n = s.size();
        int l = 0, r = 0;
        bool found = false;
        int zeroIdx = -1;
        while (l < n)
        {
            int count = 0;
            bool flag = false;
            while (s[l] == '0' && l < n)
            {
                if (!flag)
                {
                    zeroIdx = l;
                }
                flag = true;
                l++;
                count++;
                found = true;
            }
            mostZeros = max(mostZeros, count);
            l++;
            if (found)
            {
                break;
            }
        }
        vector<pair<int, int>> temp, tempIndexes;
        while (r < n)
        {
            bool flag = false;

            if (s[r] == '1')
            {
                int idx = -1, count = 0;
                while (s[r] == '1' && r < n)
                {
                    if (!flag)
                    {
                        idx = r;
                    }
                    flag = true;
                    r++;
                    count++;
                }
                temp.push_back({idx, count});
            }
            else
            {

                r++;
            }
        }

        vector<int> indexes;

        for (int i = 0; i < temp.size(); i++)
        {
            pair<int, int> idx = temp[i];
            if (idx.second <= mostZeros)
            {
                tempIndexes.push_back({idx.first, idx.second});
            }
        }

        if (!tempIndexes.empty())
        {
            int maxV = INT_MIN;
            for (int i = 0; i < tempIndexes.size(); i++)
            {
                if (tempIndexes[i].second > maxV)
                {
                    maxV = tempIndexes[i].second;
                }
            }
            for (int i = tempIndexes.size() - 1; i >= 0; i--)
            {
                if (tempIndexes[i].second == maxV)
                {
                    indexes.push_back(tempIndexes[i].first);
                }
            }

            // for (int i = 0; i < indexes.size(); i++)
            // {
            //     cout<<indexes[i]<<" ";
            // }
            // cout<<nl;
            

            vector<pair<int, pair<int, int>>> ans;

            for (int i = 0; i < indexes.size(); i++)
            {
                int count = 0;
                int l = zeroIdx;
                int r = indexes[i];
                // cout<<l<<" "<<r<<nl;

                while (l < n && r < n)
                {
                    if (s[l] == s[r])
                    {
                        break;
                    }
                    count++;
                    l++, r++;
                }
                if (count > 0)
                {
                    pair<int, int> ids = {indexes[i]+1, r};
                    ans.push_back({count, ids});
                }
            }

            int ansL = -1, ansR = -1, ansMax = INT_MIN;
            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i].first > ansMax)
                {
                    ansMax = ans[i].first;
                    ansL = ans[i].second.first;
                    ansR = ans[i].second.second;
                }
            }
            cout << 1 << " " << s.size() << " " << ansL << " " << ansR << nl;
        }
        else
        {
            cout << 1 << " " << s.size() << " " << 1 << " " << 1 << nl;
        }
    }
    return 0;
}