#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxNum = n * n;
        int minNum = 1;
        bool isReverse = false;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {

            if (!isReverse)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                    {

                        arr[i][j] = maxNum;
                        maxNum--;
                    }
                    else
                    {

                        arr[i][j] = minNum;
                        minNum++;
                    }
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    if (j % 2 == 1)
                    {

                        arr[i][j] = maxNum;
                        maxNum--;
                    }
                    else
                    {

                        arr[i][j] = minNum;
                        minNum++;
                    }
                }
            }
            isReverse = !isReverse;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << nl;
        }
    }

    return 0;
}