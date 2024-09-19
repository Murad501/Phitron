#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<string> q;
    
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else
        {
            cin.ignore();
            string str;
            getline(cin, str);
            q.push(str);
        }
    }
    return 0;
}