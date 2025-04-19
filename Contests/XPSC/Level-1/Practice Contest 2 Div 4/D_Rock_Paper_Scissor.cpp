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
        string a, b;
        cin >> a >> b;

        ll Chef = 0;
        ll Chefina = 0;
        ll draw = 0;

        for (int i = 0; i < n; i++)
        {
            char Cf = a[i];
            char Cn = b[i];

            if (Cf == 'R' && Cn == 'S')
            {
                Chef++;
            }
            else if (Cf == 'S' && Cn == 'R')
            {
                Chefina++;
            }
            else if (Cf == 'S' && Cn == 'P')
            {
                Chef++;
            }
            else if (Cf == 'P' && Cn == 'S')
            {
                Chefina++;
            }
            else if (Cf == 'P' && Cn == 'R')
            {
                Chef++;
            }
            else if (Cf == 'R' && Cn == 'P')
            {
                Chefina++;
            }
            else if (Cf == Cn)
            {
                draw++;
            }
        }
        ll ans = 0;
        if (Chef > Chefina)
        {
            ans = 0;
        }
        else if (Chef == Chefina)
        {
            ans++;
        }
        else if (Chefina > Chef)
        {

            while (draw--)
            {
                ans++;
                Chef++;
                if (Chef > Chefina)
                {
                    break;
                }
            }

            if (Chefina > Chef)
            {
                int CnWin = Chefina - Chef;
                while (CnWin--)
                {
                    ans++;
                    Chef++;
                    Chefina--;
                    CnWin = Chefina - Chef;
                    if (Chef > Chefina)
                    {
                        break;
                    }
                }
            }

            if (Chef == Chefina)
            {
                ans++;
            }
        }

        cout << ans << nl;
    }

    return 0;
}