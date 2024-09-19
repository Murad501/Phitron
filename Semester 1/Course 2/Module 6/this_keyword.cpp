#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    };
    void hello()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Person rakib("Rakib", 10);
    rakib.hello();
    return 0;
}