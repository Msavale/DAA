#include <bits/bitsc++.h>
#include <string.h>
using namespace std;
class Person {
public:
    // Constructor
    Person(std::string name, int age) : name(name), age(age) {}

    // Copy constructor
    Person(const Person& other) : name(other.name), age(other.age) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Person person1("Alice", 30);
    Person person2 = person1; // Copy constructor is called here

    person1.display();
    person2.display();

    return 0;
}

