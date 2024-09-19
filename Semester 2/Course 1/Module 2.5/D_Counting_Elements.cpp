#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        int value = v[i] + 1;
        auto it = find(v.begin(), v.end(), value);
        cout<<*it<<endl;
        if (*it)
        {
            sum++;
        }
    }

    cout << sum;

    return 0;
}