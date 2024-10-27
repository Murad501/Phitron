#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int weight[], int val[], int W)
{
    if (n < 0 || W == 0)
        return 0;
    if (weight[n] <= W)
    {
        // dui ta option
        int opt1 = knapsack(n - 1, weight, val, W - weight[n]) + val[n];
        int opt2 = knapsack(n - 1, weight, val, W);

        return max(opt1, opt2);
    }
    else
    {
        int opt2 = knapsack(n - 1, weight, val, W);
        return opt2;
    }
}

int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];

    for (int i = 0; i < n; i++)
    {

        cin >> weight[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int W;
    cin >> W;

    cout << knapsack(n - 1, weight, value, W) << endl;

    return 0;
}