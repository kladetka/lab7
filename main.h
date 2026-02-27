//
// Created by Користувач on 27.02.2026.
//

#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H
#include <iostream>
#include <string>

class Student
{
    std::string name;
    int age;
public:
    Student(std::string n, int a)
        : name (n), age (a){}

 Student()
    : name{"alex"}, age{12}{}

    ~Student() {};

};

class Teacher
{
    std :: string name;
    int age;
    public:
    Teacher();
    ~Teacher();
};

class Curse
{
    int namber;
    public:
    Curse();
    ~Curse();
};


#endif //UNTITLED_MAIN_H