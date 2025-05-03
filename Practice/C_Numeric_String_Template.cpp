#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
      cin >> vc[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
      string str;
      cin >> str;
      if (n != str.size())
      {
        cout << "NO\n";
        continue;
      }
      else
      {
        map<char, set<int>> mp;
        map<int, set<char>> mp2;
        for (int i = 0; i < n; i++)
        {
          mp[str[i]].insert(vc[i]);
        }
        for (int i = 0; i < n; i++)
        {
          mp[vc[i]].insert(str[i]);
        }
        bool flag = true;
        for (auto [x, y] : mp)
        {
          if (y.size() != 1)
          {
            flag = false;
            break;
          }
        }
        for (auto [x, y] : mp2)
        {
          if (y.size() != 1)
          {
            flag = false;
            break;
          }
        }
        if (flag)
          cout << "YES\n";
        else
          cout << "NO\n";
      }
    }
  }
  return 0;
}