// 30/10/2025 18:44
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v;
    set<int>st;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
        st.insert(y);
    }
    priority_queue<int> pq;
    sort(all(v));
    for (int i = 0; i < n - 1; i++)
    {
        int val = abs(v[i] - v[i + 1]);
        if (val > 0)
        {
            // cout << val - 1 << " ";
            pq.push(val);
        }
    }

    int left = v[0], right = x - v[n - 1];

    if (pq.size() == 0)
    {

        while (k)
        {
            if (left >= right)
            {
                left--;
            }
            else
            {
                right--;
            }
            k--;
            if (left <= 0 && right <= 0)
            {
                break;
            }
        }

        mn = max(left, right);
        mn = max(mn, 0LL);
    }

    if (left > 0)
    {
        left++;
    }
    if (right > 0)
    {
        right++;
    }

    while (!pq.empty() && k)
    {
        if (left > mn)
        {
            left--;
        }
        else if (right > mn)
        {
            right--;
        }
        else
        {
            int val = pq.top();
            int mid = val / 2;
            // if (val % 2 == 0)
            // {
            //     mid--;
            // }

            if (mid >= mn)
            {
                pq.pop();
                if (mid)
                {
                    pq.push(mid);
                }
                if (val & 1)
                {
                    pq.push(mid + 1);
                }
                else
                {
                    if (mid)
                    {
                        pq.push(mid);
                    }
                }
                mn = min(mn, mid);
            }
            else
            {

                if (mid >= left && mid >= right)
                {
                    pq.pop();
                    if (mid)
                    {
                        pq.push(mid);
                    }
                    if (val & 1)
                    {
                        pq.push(mid + 1);
                    }
                    else
                    {
                        if (mid)
                        {
                            pq.push(mid);
                        }
                    }
                    mn = mid;
                }
                else
                {
                    if (left >= right)
                    {
                        left--;
                        mn = left;
                    }
                    else
                    {
                        right--;
                        mn = right;
                    }
                }
            }
        }
        k--;
    }
    int prev = -1, val = 0;
    for (int j = 1; j <=k; j++)
    {
         if(prev == -1){
            auto right = st.lower_bound(val);
            if(right == st.end()){

            }else{

            }
         }else{
            auto right = st.lower_bound(val);
            if(right == st.end()){

            }else{

            }
            
         }
    }

    cout << mn << nl;
    // cout << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}