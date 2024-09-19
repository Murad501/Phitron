#include <bits/stdc++.h>
using namespace std;

int * fun()
{
    int *a = new int[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }

    return a;
}
int main()
{
    int* p = fun();

    for (int i = 0; i < 4; i++)
    {
       cout << p[i] << " ";
    }
    
    return 0;
}