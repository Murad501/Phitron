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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        string s;
        set<int> st;
        vector<int> temp;
        s.push_back('1');
        temp.push_back(v[0]);
        st.insert(v[0]);
        if (n > 1)
        {
            s.push_back('1');
            temp.push_back(v[1]);
            st.insert(v[1]);
        }
        for (int i = 2; i < n; i++)
        {
            int x = v[i];
            int first = temp[0];
            int last = temp[temp.size() - 1];

            if ((first == x || last == x) || (x > last && last > first) || (x > last && x < first) || (x < first && x < last && last > first) || (first == last && st.size() <= 1))
            {
                s.push_back('1');
                temp.push_back(x);
                st.insert(x);
                continue;
            }

            s.push_back('0');
        }
        cout << s << nl;
    }
    return 0;
}