#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        // this->cls = cls;
        // this->gpa = gpa;
        // this->roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
        (*this).roll = roll;
    }
};
int main()
{
    Student rahim(10, 12, 3.5);
    Student karim(2, 5, 4.5);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa<<endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa;

    return 0;
}