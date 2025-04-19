#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> v(n + 1);
        set<int> st;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        int i = 1;
        int j = n;
        bool flag = false;
        while (i < j)
        {
            int mx = *st.rbegin();
            int mn = *st.begin();
            if (v[i] != mx && v[i] != mn && v[j] != mx && v[j] != mn)
            {
                cout << i << " " << j << endl;
                flag = true;
                break;
            }

            if (v[i] == mx || v[i] == mn)
            {

                st.erase(v[i]);
                i++;
            }
            else
            {

                st.erase(v[j]);
                j--;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}