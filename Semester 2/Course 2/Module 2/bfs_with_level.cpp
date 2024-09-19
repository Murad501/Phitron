#include <bits/stdc++.h>
using namespace std;

vector<int> v[1000];
bool vst[1000];
int level[1000];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vst[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (int child : v[p])
        {

            if (!vst[child])
            {
                vst[child] = true;
                level[child] = level[p] + 1;
                q.push(child);
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
    memset(level, -1, sizeof(level));

    bfs(src);

    for (int i = 0; i < n; i++)
    {
        cout<<level[i]<<"-"<<i<<endl;;
    }
    

    return 0;
}