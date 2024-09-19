#include <bits/stdc++.h>
using namespace std;

vector<int> v[1000];
bool vst[1000];

void bfs(int src, int dst)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vst[src] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int p = par.first;
        int level = par.second;
        if(p == dst){
            cout<<level<<" "<<par.second;
        }

        for (int child : v[p])
        {

            if (!vst[child])
            {
                vst[child] = true;

                q.push({child, level + 1});
            }
        }
    }
};

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin >> src;
    memset(vst, false, sizeof(vst));

    bfs(src, 6);

    return 0;
}