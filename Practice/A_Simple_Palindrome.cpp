// // 27/04/2025 17:34
// #include <bits/stdc++.h>
// using namespace std;
// #define nl '\n'
// #define int long long
// #define all(x) x.begin(), x.end()
// #define ll long long int
// #define yes cout << "YES" << '\n'
// #define no cout << "NO" << '\n'
// #define cyes cout << "Yes" << '\n'
// #define cno cout << "No" << '\n'
// #define minus cout << -1 << '\n'
// #define zero cout << 0 << '\n'

// #define MuRAD_BOOST()                 \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// void solve()
// {
//     int n;
//     cin >> n;
//     int possible = n / 5;
//     int remaining = n - (possible * 5);

//     vector<char> v = {'a', 'e', 'i', 'o', 'u'};
//     for (int i = 0; i < 5; i++)
//     {

//         int cnt = possible;
//         if (remaining > 0)
//         {
//             cnt++;
//             remaining--;
//         }

//         for (int j = 0; j < cnt; j++)
//         {
//             cout << v[i];
//         }
//     }
//     cout << nl;
// }

// int32_t main()
// {
//     MuRAD_BOOST();
//     int t;
//     cin >> t;
//     while (t--)
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string vowels = "aeiou";

    while (t--) {
        int n;
        cin >> n;
        string result = "";
        map<char, int>mp;

        for (int i = 0; i < n; ++i) {
             mp[vowels[i % 5]]++;
        }

        
        for(auto[key, value]:mp){
            for (int i = 0; i < value; i++)
            {
                 cout<<key;
            }
        }
        cout<<endl;
    }

    return 0;
}