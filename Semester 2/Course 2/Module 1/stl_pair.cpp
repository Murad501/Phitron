#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> pr;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        pr.push_back({a, b});
        pr.push_back({b, a});

    }



    return 0;
}