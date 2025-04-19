#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

       // map<char, long long> mpchar1, mpchar2;
        map<string, long long> mpstr;
        vector<string> v;

        for (long long i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            mpstr[x]++;
        }

        for(auto val:mpstr)
        {
            v.push_back(val.first);
        }

        long long ans = 0;

        for (int i = 0; i < v.size();i++)
        {
            for (int j = i + 1; j < v.size();j++)
            {
                if(v[i][0]==v[j][0] && v[i][1]!=v[j][1])
                {
                    ans += mpstr[v[i]] * mpstr[v[j]];
                }
                else if(v[i][0]!=v[j][0] && v[i][1]==v[j][1])
                {
                    ans += mpstr[v[i]] * mpstr[v[j]];
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}