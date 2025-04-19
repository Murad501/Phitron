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
        int n, x;
        cin >> n >> x;
        vector<int> votesOfA;
        vector<int> votesOfB;

        int minOfA = INT_MAX;
        int maxOfB = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;

            votesOfA.push_back(v);
            minOfA = min(minOfA, v);
        }

        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;

            votesOfB.push_back(v);
            maxOfB = max(maxOfB, v);
        }

        int winA = 0;
        int winB = 0;
        int draw = 0;

        map<int, int> vOfA;
        map<int, int> vOfB;

        for (int i = 0; i < n; i++)
        {
            if (votesOfA[i] > votesOfB[i])
            {
                winA++;
            }
            else if (votesOfB[i] > votesOfA[i])
            {
                winB++;
            }

            if (votesOfA[i] <= maxOfB)
            {

                vOfA[votesOfA[i]]++;
            }
            if (votesOfB[i] >= minOfA)
            {

                vOfB[votesOfB[i]]++;
            }
            if (votesOfA[i] == votesOfB[i])
            {
                draw++;
            }
        }

        for (auto [key, value] : vOfA)
        {
            for (int i = 0; i < value; i++)
            {
                auto it = vOfB.lower_bound(key);
                if (it != vOfB.end())
                {
                    int minn = (it->first - key) + 1;
                    vOfB[it->first]--;
                    if (vOfB[it->first] < 1)
                    {
                        vOfB.erase(it);
                    }
                    x -= minn;
                    if (x >= 0)
                    {
                        winA++;
                        winB--;
                    }
                    if (winA > winB)
                    {
                        break;
                    }
                }
            }
        }

        if (winA > winB)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}