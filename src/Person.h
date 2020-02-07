#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

class Person
{
public:
    Person(std::string name = "", std::string address = "", long long int JMBG = 0) : name_(name),
                                                                                      address_(address),
                                                                                      JMBG_(JMBG) {}

    void print();
    Person *insert_person();

    //protected:
    std::string name_;
    std::string address_;
    long long int JMBG_;
    Person *next;
};
