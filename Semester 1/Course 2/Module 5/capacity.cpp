#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello world";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // cout<<s.capacity()<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11, 'x');
    cout<<s<<endl;
    return 0;
}