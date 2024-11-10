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
    int x, y, z;
    cin >> x >> y >> z;
    int oPoints = z + (y * 0.5);
    int myPoints = x + (y * 0.5);
    int overRounds = x + y + z;
    int availableRounds = 4 - overRounds;
    int maxPoints = myPoints + (availableRounds * 1);
    if (maxPoints > oPoints)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}