#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }

    cout<<count0<<" "<<count1<<'\n';

    return 0;
}