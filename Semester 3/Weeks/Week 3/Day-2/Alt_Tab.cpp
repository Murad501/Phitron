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
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        arr[i] = s;
    }

    set<string> uniques;
    for (int i = n - 1; i >= 0; i--)
    {
        auto it = uniques.find(arr[i]);
        if (it == uniques.end())
        {
            string word = arr[i];
            uniques.insert(word);
            int sz = word.size();

            cout << word[sz - 2] << word[sz - 1];
        }
    }

    return 0;
}