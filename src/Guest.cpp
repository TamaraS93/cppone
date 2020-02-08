#include <iostream>
#include <string.h>
#include "Person.h"
#include "List.h"
#include "Guest.h"

void Guest::function_insert_guest()
{
    long long int function_JMBG;
    int room_function;
    int number_of_reservation_function;
    Person psn;

    std::cout << "Enter person JMBG \n";
    std::cin >> function_JMBG;
    List lst;
    Person *check = lst.check_for_person(function_JMBG);

    if (check == nullptr)
    {
        psn.insert_person();
    }
    std::cout << "Enter room number \n";
    std::cin >> room_function;
    std::cout << "Enter number of reservation \n";
    std::cin >> number_of_reservation_function;
    Guest *new_guest = new Guest(room_function, number_of_reservation_function);
    lst.insert(new_guest);
    std::cout << "New guest added to list" << std::endl;
}

void Guest::function_print_guest_with_JMBG()
{
    int function_JMBG;
    std::cout << "Enter guest JMBG \n";
    std::cin >> function_JMBG;
    List lst;
    lst.print_with_JMBG(function_JMBG);
    std::cout << "*****************" << std::endl;
}