#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0, cnt = 0, big = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
            {
                if (cnt == k)
                    break;
                else
                {
                    cnt = 0;
                    l = i + 1;
                    r++;
                }
            }
            else
            {
                cnt++;
                r++;
            }
        }
        // cout<<cnt<<" "<<big<<endl;
        if (cnt >= k)
            cout << 0 << endl;
        else
        {
            int l = 0, r = 0, cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W')
                    cnt++;
                if (r - l + 1 == k)
                {
                    break;
                }
                r++;
            }
            cout << cnt << endl;
        }
    }

    return 0;
}