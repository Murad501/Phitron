#include <bits/stdc++.h>
using namespace std;


namespace Rakib
{
    int age = 29;
    void hello()
    {
        cout << "Hello Rakib" << endl;
    }

};
namespace Sakib
{
    int age = 27;
    void hello()
    {
        cout << "Hello Sakib" << endl;
    }

};

using namespace Rakib;
using namespace Sakib;
int main()
{
    cout<<Rakib::age<< endl;
    return 0;
}