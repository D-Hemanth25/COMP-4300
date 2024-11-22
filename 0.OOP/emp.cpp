#include <iostream>

class Employee
{
public:
    std::string name;
    std::string company;
    int age;

    void introduce()
    {
        std::cout << "Hello my name is " << name;
        std::cout << " I'm working at " << company;
        std::cout << " I'm " << age << " years old.";
    }
};

int main()
{
    Employee employee1;
    employee1.name = "foo";
    employee1.company = "bar";
    employee1.age = 25;

    employee1.introduce();
    return 0;
}