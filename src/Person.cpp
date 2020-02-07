#include <iostream>
#include <string.h>
#include "Person.h"
#include "List.h"

void Person::print()
{
    std::cout << name_ << "\n";
    std::cout << address_ << "\n";
    std::cout << JMBG_ << std::endl;
}

Person *Person::insert_person()
{
    long long int JMBG_function;
    std::string name_function;
    std::string address_function;

    std::cout << "Enter JMBG \n";
    std::cin >> JMBG_function;
    std::cout << "Enter name \n";
    std::cin >> name_function;
    std::cout << "Enter address" << std::endl;
    std::cin >> address_function;

    Person *new_person = new Person(name_function, address_function, JMBG_function);
    List l;
    l.insert(new_person);

    return new_person;
}
