#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                char topChar = st.top();
                if (c == '1')
                {
                    if (topChar == '0')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(c);
                    }
                }
                else
                {
                    if (topChar == '1')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(c);
                    }
                }
            }
        }

        if (!st.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}