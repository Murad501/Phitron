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
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        vector<int> negative;
        multiset<int> positive;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                negative.push_back(b[i] - a[i]);
            }
            else
            {
                positive.insert(b[i] - a[i]);
            }
        }
        sort(negative.begin(), negative.end(), greater<int>());

        int ans = 0;
        for (int i = 0; i < negative.size(); i++)
        {
            int val = abs(negative[i]);
            auto it = positive.lower_bound(val);
            if(it != positive.end()){
                ans++;
                positive.erase(it);
            }else{
                break;
            }
        }
        ans+=positive.size()/2;
        cout << ans << nl;
    }
    return 0;
}