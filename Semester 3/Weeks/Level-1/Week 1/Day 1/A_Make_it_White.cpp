#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
       int n;
       cin >> n;
       string s;
       cin >> s;
       int firstPos = -1, lastPos = -1;
       firstPos = s.find('B');
       lastPos = s.rfind('B');
       cout<<lastPos - firstPos+1<<endl;

    }
    

    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     vector<char> cells;
    //     int first = 0;
    //     int last = 0;

    //     bool found = false;
    //     for (int i = 0; i < n; i++)
    //     {
    //         char c;
    //         cin >> c;
    //         cells.push_back(c);
    //         if (c == 'B' && !found)
    //         {
    //             found = true;
    //             first = i;
    //             last = i + 1;
    //         }
    //         else if (c == 'B')
    //         {
    //             last = i + 1;
    //         }
    //     }
    //     cout << last - first << endl;
    // }

    return 0;
}