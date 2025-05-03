// #include <bits/stdc++.h>
// using namespace std;
// #define nl '\n'
// #define ll long long int

// #define MuRAD_BOOST()                 \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// int main()
// {
//     MuRAD_BOOST();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int count = 0;

//         int l = 0;
//         while (l < n)
//         {
//             if (s[l] == 'B')
//             {
//                 count++;
//                 l += k;
//             }
//             else
//             {
//                 l++;
//             }
//         }

//         cout << count << nl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> ans;
        int totalb = 0, cntb = 0;
          for (int i = 0; i < n; i++) {
            if (s[i] == 'B') totalb++;
        }
         int l = 0;
        for (int r = 0; r < n; r++) {
            if (s[r] == 'B') cntb++;

            if (r - l + 1 == k) {
                ans.push_back(cntb);
                if (s[l] == 'B') cntb--;
                l++;
            }
        }
      int cnt = 0;
        for (int b : ans) {
            if (totalb == 0) break;
            totalb -= b;
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}