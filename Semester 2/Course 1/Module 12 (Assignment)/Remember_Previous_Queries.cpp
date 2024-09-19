#include <bits/stdc++.h>
using namespace std;

void print_list_normal(list<int> myList)
{
    cout << "L -> ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_list_reverse(list<int> myList)
{
    myList.reverse();
    cout << "R -> ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int list_size = myList.size();

        if (x == 0)
        {
            myList.push_front(v);
            print_list_normal(myList);
            print_list_reverse(myList);
        }
        else if (x == 1)
        {

            myList.push_back(v);
            print_list_normal(myList);
            print_list_reverse(myList);
        }
        else
        {

            if (v >= list_size)
            {
                print_list_normal(myList);
                print_list_reverse(myList);
            }
            else
            {
                myList.erase(next(myList.begin(), v));
                print_list_normal(myList);
                print_list_reverse(myList);
            }
        }
    }
    return 0;
}