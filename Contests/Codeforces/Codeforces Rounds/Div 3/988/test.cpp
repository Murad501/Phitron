#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    MuRAD_BOOST();
    int x;
    cin >> x;
    if (isPrime(x)){
        cout << "Prime Number" << nl;
    }else{
        cout << "Not a Prime Number" << nl;
    }

    return 0;
}