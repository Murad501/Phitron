#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); //this two line input output faster


    int t;
    cin>>t;

    while(t--)
    {
        int n, m, q;
        cin>>n>>m>>q;

        multiset<int>tcr;
        //multiset<int>stu;

        for(int i=0; i<m; i++)
        {
            int a;
            cin>>a;
            tcr.insert(a);
        }

        for(int i=0; i<q; i++)
        {
            int x;
            cin>>x;
            auto it1 = tcr.lower_bound(x);
            auto it2 = tcr.lower_bound(x);

            it2--;

            if(it1 != tcr.end() && it1 != tcr.begin())
            {
                int left = *it2, right = *it1;
                //cout<<left<<" "<<right<<endl;

                int david = (left + right)/2;

                cout<<min(abs(david - left), abs(david - right))<<endl;
            }
            else if(it1 == tcr.end())
            {
                it1--;
                cout<<n - *it1<<endl;
            }
            else if(it2 == tcr.begin())
            {
                cout<<*it2 - 1<<endl;
            }

        }
        //cout<<endl;

    }

    return 0;
}