#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 3, 4, 5, 2, 4, 2};
    // replace(v.begin(), v.end()-1, 2, 100);
    // for(int c: v){
    //     cout << c << " ";
    // }

    auto it = find(v.begin(), v.end(), 99);

    cout<<*it<<endl;

    if(it == v.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }

    return 0;
}