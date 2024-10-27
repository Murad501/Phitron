#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> student = {"Rahim", 10};
    // cout<<student.first<<" "<<student.second<<endl;'
    // student.first = "Karim";

    // auto[name, roll] = student;
    // cout<<name<<" "<<roll<<endl;

    int n;
    cin >> n;
    // pair<string, int> students[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }

    // for (auto [name, roll] : students)
    // {
    //     cout << name << " " << roll << endl;
    // }

    // tuple<string, int, string> student = make_tuple("Rahim", 23, "K432");
    // cout<<get<0>(student)<<" "<<get<1>(student) << " "<< get<2>(student)<<endl;

    tuple<string, int, string> students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> get<0>(students[i]) >> get<1>(students[i]) >> get<2>(students[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << get<0>(students[i]) << " " << get<1>(students[i]) << " " << get<2>(students[i]) << endl;
        
    // }
    for (auto [name, roll, number] : students)
    {
        cout << name << " " << roll << " " << number << endl;
    }

    return 0;
}