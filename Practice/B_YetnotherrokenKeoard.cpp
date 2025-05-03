#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string ss;
        cin >> ss;
        string s;
        vector<int> ca, sm;
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] != 'B' && ss[i] != 'b')
            {
                s.push_back(ss[i]);
                if (ss[i] >= 'A' && ss[i] <= 'Z')
                {
                    ca.push_back(i);
                }
                if (ss[i] >= 'a' && ss[i] <= 'z')
                {
                    sm.push_back(i);
                }
            }
            if (ss[i] == 'B')
            {
                if (!ca.empty())
                {
                    s.erase(ca.back() + 1);
                    ca.pop_back();
                }
            }
            if (ss[i] == 'b')
            {
                if (!sm.empty())
                {
                    char c = sm.back() + 1;
                    cout<<c<<endl;
                    // s.erase(sm.back() + 1);
                    // sm.pop_back();
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
