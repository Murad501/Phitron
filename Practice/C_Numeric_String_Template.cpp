/// In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define mem(a, b) memset(a, b, sizeof(a))
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define fraction()              \
  cout.unsetf(ios::floatfield); \
  cout.precision(10);           \
  cout.setf(ios::fixed, ios::floatfield);

int main()
{
  optimize();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    int q;
    cin >> q;

    while (q--)
    {
      string s;
      cin >> s;
      bool flag = true;
      if (s.size() != n)
      {
        flag = false;
      }
      else
      {

         map<char, int> mp1;
        map<int, char> mp2;
        for (int i = 0; i < n; i++)
        {
          if (mp1.find(s[i]) == mp1.end() && mp2.find(v[i]) == mp2.end())
          {
            mp1[s[i]] = v[i];
            mp2[v[i]] = s[i];
          }
          if (mp1[s[i]] != v[i])
          {
            flag = false;
            break;
          }
        }
        // for (int i = 0; i < n; i++)
        // {
        //   char ch = s[i];
        //   int num = v[i];

        //   if (mp1.count(ch) && mp1[ch] != num)
        //   {
        //     flag = false;
        //     break;
        //   }
        //   if (mp2.count(num) && mp2[num] != ch)
        //   {
        //     flag = false;
        //     break;
        //   }
        //   mp1[ch] = num;
        //   mp2[num] = ch;
        // }
      }
      if (flag)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
  return 0;
}