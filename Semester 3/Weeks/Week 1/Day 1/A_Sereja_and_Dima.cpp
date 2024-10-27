#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> cards;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        cards.push_back(num);
    }

    bool Sereja = true;
    bool Dima = false;

    int sumSereja = 0;
    int sumDima = 0;

    while (!cards.empty())
    {
        int first = cards.front();
        int last = cards.back();
        if (Sereja)
        {
            if (first > last)
            {
                sumSereja += first;
                cards.pop_front();
            }
            else
            {
                sumSereja += last;
                cards.pop_back();
            }
        }
        else
        {
            if (first > last)
            {
                sumDima += first;
                cards.pop_front();
            }
            else
            {
                sumDima += last;
                cards.pop_back();
            }
        }
        swap(Sereja, Dima);
    }

    cout << sumSereja << " " << sumDima << '\n';

    return 0;
}