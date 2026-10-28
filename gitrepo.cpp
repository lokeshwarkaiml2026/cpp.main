#include <iostream>
#include <string>

class Student {
private:
    int rollNo;
    std::string name;

public:
    // Constructor using Member Initializer List and const reference
    Student(int r, const std::string &n)
        : rollNo(r), name(n) {
        std::cout << "Student Object Created" << std::endl;
    }

    // Member function to display details
    void display() const {
        std::cout << "Roll Number: " << rollNo << std::endl;
        std::cout << "Name: " << name << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Student Object Destroyed" << std::endl;
    }
};

int main() {
    Student s1(101, "Arun");

    s1.display();

    return 0;
}