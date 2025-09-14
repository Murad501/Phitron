#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define sz(yo) (ll)yo.size()

const ll maxN = 1e5 + 9, MOD = 1e9 + 7;
ll res[maxN];

void solve() {
   ll n;
   cin >> n;
   vector<ll> a(n), k(n);
   for (ll i = 0;i < n;i++) {
      cin >> a[i];
   }
   for (ll i = 0;i < n;i++) {
      cin >> k[i];
   }

   for (ll i = 0;i < n;i++) {
      ll ans = res[k[i]];
      cout << ans << '\n';
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll P = 1;
   for (ll i = 1;i < maxN - 1;i++) {
      P = (P % MOD * 2LL % MOD) % MOD;
      res[i] = P;
   }

   ll t;
   t = 1;
   // cin >> t;
   for (ll cs = 1; cs <= t; cs++) {
      // cout << "Case " << cs << ": ";
      solve();
   }

   return 0;
}