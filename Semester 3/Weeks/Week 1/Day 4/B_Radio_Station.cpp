#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> serverIps;
    vector<pair<string, string>> commandIps;
    for (int i = 0; i < n; i++)
    {
        string name, value;
        cin >> name >> value;
        serverIps.push_back({name, value});
    }

    for (int i = 0; i < m; i++)
    {
        string name, value;
        cin >> name >> value;
        commandIps.push_back({name, value});
    }

    for (int i = 0; i < m; i++)
    {
        string ipVal = commandIps[i].second;
        ipVal.pop_back();
        string serverName;
        for (int j = 0; j < n; j++)
        {
            if (serverIps[j].second == ipVal)
            {

                serverName = serverIps[j].first;
                break;
            }
        }

        cout << commandIps[i].first << " " << commandIps[i].second << " #" << serverName << '\n';
    }

    return 0;
}