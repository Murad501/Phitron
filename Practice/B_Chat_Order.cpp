#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    map<int, string> mp;
    stack<string> st;
    int j = 0;
    while (t--)
    {
        string s;
        cin >> s;
        st.push(s);
    }

    while(!st.empty())
    {
        mp[j] = st.top() ;
        st.pop();
        j++;
    }

    for (auto it : mp)
        cout << it.second << endl;
}