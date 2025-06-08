#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // cout<<n<<" "<<k<<endl;

        vector<priority_queue<int>> prices_list;
        for (int i = 0; i < k; i++)
        {
            int b, c;
            cin >> b >> c;
            cout<<b<<" "<<c<<endl;
            // prices_list[b].push(c);
        }

        for(auto val: prices_list){
            cout<<val.top()<<endl;
        }

        // int count = 0;
        // int ans = 0;
        // int sz = prices_list.size();
        // for (int i = 0; i < k; i++)
        // {
        //     cout<<i<<endl;
        //     // if (count == n)
        //     // {
        //     //     break;
        //     // }
        //     // else
        //     // {
        //     //     int idx = 0;
        //     //     int maxVAl = INT_MIN;
        //     //     for (int j = 0; j < sz; j++)
        //     //     {
        //     //         if (!prices_list[j].empty())
        //     //         {
        //     //             int val = prices_list[j].top();
        //     //             if (val > maxVAl)
        //     //             {
        //     //                 maxVAl = val;
        //     //                 idx = j;
        //     //             }
        //     //         }
        //     //     }
        //     //     ans += maxVAl;
        //     //     prices_list[idx].pop();
        //     //     count++;
        //     // }
        // }

        // vector<int> values;

        // for (auto price : prices)
        // {
        //     values.push_back(price);
        // }
        // int ans = 0;
        // int minTimes = min(n, k);
        // int max = n;
        // for (int i = k-1; i >= 0; i--)
        // {
        //     if(max != 0){
        //         ans += values[i];
        //         max--;
        //     }
        // }

        // cout << ans << '\n';
        // values.clear();
    }
    return 0;
}