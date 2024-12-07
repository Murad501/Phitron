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
        string s;
        cin >> s;
        int sum = 0;
        int two = 0, three = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i] - 48;

            if (x == 2)
            {
                two++;
            }
            else if (x == 3)
            {
                three++;
            }

            sum += x;
        }

        bool flag = false;
        if (sum % 9 == 0)
        {
            flag = true;
        }
        else
        {
            for (int i = 0; i < two; i++)
            {
                sum += 2;
                if (sum % 9 == 0)
                {
                    flag = true;
                    break;
                }
                int temp = sum;
                for (int j = 0; j < three; j++)
                {
                    temp -= 3;
                    if (temp % 9 == 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            for (int i = 0; i < three; i++)
            {
                sum -= 3;
                if (sum % 9 == 0)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
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