#include <iostream>
#include "./include/Human.hpp"
#include "./include/Student.hpp"

using namespace std;

int main()
{
    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");

    Human human;
    human.eat();
    human.toLive();

    delete student;
    
    return 0;
}