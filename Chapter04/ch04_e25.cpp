// Operator Overloading Example
#include <iostream>
#include <string>
#include <utility>

class Person
{
public:
    Person(int age, std::string name) : age(age), name(std::move(name))
    {
    };
    
    int age = 0;
    std::string name;
    
    bool operator == (Person const& other) const
    {
         return ((age == other.age) && (name == other.name));
    }
};

int main()
{
    Person PersonA = Person(27, "Lucy");
    Person PersonB = Person(27, "Lucy");
    Person PersonC = Person(27, "Susan");
    std::cout << (PersonA == PersonB) << std::endl;
    std::cout << (PersonB == PersonC) << std::endl;
}
