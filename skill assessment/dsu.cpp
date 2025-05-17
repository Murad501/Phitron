// 04/05/2025 01:33
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

const int N = 100;
int parent[N];
int groupSize[N];

void dsu_init(int n)
{
    for (int i = 0; i <= n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }

    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_by_size(int a, int b){
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if(groupSize[leaderA] > groupSize[leaderB]){
        parent[leaderB] = leaderA;
        groupSize[leaderA]+=groupSize[leaderB];
    }else{
        parent[leaderA] = leaderB;
        groupSize[leaderB]+=groupSize[leaderA];
    }

}

void solve()
{
    int n;
    cin >> n;
    dsu_init(n);
    dsu_by_size(4, 5);
    dsu_by_size(5, 6);
    dsu_by_size(5, 7);

    // parent[5] = 6;
    // parent[6] = 4;

    // cout << dsu_find(5) << nl;
    for (int i = 0; i < n; i++)
    {
         cout<<i<<"->"<<groupSize[i]<<nl;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}