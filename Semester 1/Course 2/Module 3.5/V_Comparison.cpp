#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '<':
        (a < b) ? cout << "Right" : cout << "Wrong" << endl;
        break;
    case '>':
        (a > b) ? cout << "Right" : cout << "Wrong" << endl;
        break;
    case '=':
        (a == b) ? cout << "Right" : cout << "Wrong" << endl;
        break;
    }
    return 0;
}