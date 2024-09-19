#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int english_marks;
};

bool sortCondition(Student s1, Student s2)
{
    int s1_total = s1.math_marks + s1.english_marks;
    int s2_total = s2.math_marks + s2.english_marks;
    if (s1_total == s2_total)
    {
        return s1.id < s2.id;
    }
    else
    {
        return s1_total > s2_total;
    }
}

int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id >> s[i].math_marks >> s[i].english_marks;
    }

    sort(s, s + n, sortCondition);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].math_marks << " " << s[i].english_marks << endl;
    }

    return 0;
}