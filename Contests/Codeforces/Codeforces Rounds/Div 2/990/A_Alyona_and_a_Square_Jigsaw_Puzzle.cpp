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
        int n;
        cin >> n;
        vector<int> v;
        vector<int> preSum;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        preSum.push_back(1);
        for (int i = 1; i < n; i++)
        {
            preSum.push_back(preSum[i - 1] + v[i]);
        }

        int maxV = preSum[n - 1];

        set<int> st;
        st.insert(1);
        int prev = 1;
        int count = 8;
        while ((count + prev) <= maxV)
        {
            st.insert(prev + count);
            prev += count;
            count += 8;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int val = preSum[i];
            auto it = st.find(val);
            if (it != st.end())
            {
                ans++;
            }
        }

        cout << ans << nl;
    }

    return 0;
}