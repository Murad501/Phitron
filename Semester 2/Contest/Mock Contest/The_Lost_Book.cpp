#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> books;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        books.push_back(a);
    }

    int t;
    cin >> t;

    auto it = find(books.begin(), books.end(), t);

    if (it == books.end())
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << it - books.begin() << endl;
    }

    return 0;
}