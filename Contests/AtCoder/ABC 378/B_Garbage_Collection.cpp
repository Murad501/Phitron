#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> qr;
    for (int i = 0; i < N; i++)
    {
        int q, r;
        cin >> q >> r;
        qr.push_back({q, r});
    }

    int Q;
    cin>>Q;

    vector<pair<int, int>> td;
    for (int i = 0; i < Q; i++){
        int t, d;
        cin >> t >> d;
        td.push_back({t, d});
    }
    
    return 0;
}