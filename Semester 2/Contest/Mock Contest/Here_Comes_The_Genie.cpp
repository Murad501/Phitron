#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> balls;
    for (int i = 0; i < n; i++)
    {
        int ball;
        cin >> ball;
        balls.insert(ball);
    }

    long long int sum = 0;
    for (int ball : balls)
    {
        sum += ball;
    }

    cout << sum << endl;

    return 0;
}