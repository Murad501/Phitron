#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         bool sakurako = true;
//         bool kosuke = false;

//         if (x == 1)
//         {
//             swap(sakurako, kosuke);
//         }
//         else
//         {
//             int start = 0;
//             int j = 1;
//             while (start <= x)
//             {
//                 if (start + i >= x)
//                 {
//                     break;
//                 }

//                 if (sakurako)
//                 {
//                     start -= j;
//                 }
//                 else
//                 {
//                     start += j;
//                 }
//                 swap(sakurako, kosuke);
//                 j+=2;
//                 cout<<start<<endl;
//             }

//             // for (int j = 1; j < x; j += 2)
//             // {
//             //     if (start + i >= x)
//             //     {
//             //         break;
//             //     }

//             //     if (sakurako)
//             //     {
//             //         start -= j;
//             //     }
//             //     else
//             //     {
//             //         start += j;
//             //     }
//             //     swap(sakurako, kosuke);
//             // }
//             cout << start << endl;
//         }
//         if (sakurako)
//         {
//             cout << "Sakurako" << endl;
//         }
//         else
//         {
//             cout << "Kosuke" << endl;
//         }
//     }

//     return 0;
// }

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            cout << "Sakurako" << endl;
        }
        else
        {
            cout << "Kosuke" << endl;
        }
    }

    return 0;
}