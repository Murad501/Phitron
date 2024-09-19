#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Student student_1, student_2, student_3;
        cin >> student_1.id >> student_1.name >> student_1.section >> student_1.marks;
        cin >> student_2.id >> student_2.name >> student_2.section >> student_2.marks;
        cin >> student_3.id >> student_3.name >> student_3.section >> student_3.marks;

        if (student_1.marks >= student_2.marks && student_1.marks >= student_3.marks)
        {
            cout << student_1.id << " " << student_1.name << " " << student_1.section << " " << student_1.marks << endl;
        }
        else if (student_2.marks >= student_1.marks && student_2.marks >= student_3.marks)
        {
            cout << student_2.id << " " << student_2.name << " " << student_2.section << " " << student_2.marks << endl;
        }
        else
        {
            cout << student_3.id << " " << student_3.name << " " << student_3.section << " " << student_3.marks << endl;
        }
    }

    return 0;
}