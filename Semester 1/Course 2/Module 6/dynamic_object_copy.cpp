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
};

int main()
{
    Person *rakib = new Person("Rakib", 10);
    Person *sakib = new Person("Sakib", 20);

    // rakib->age = sakib->age;
    // rakib->name = sakib->name;
    *rakib = *sakib;

    cout<<rakib->name<<" "<<rakib->age<<endl;

    return 0;
}