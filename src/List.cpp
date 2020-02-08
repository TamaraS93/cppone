#include "List.h"
#include "Person.h"
#include "Guest.h"

Person *person_head = nullptr;
Guest *guest_head = nullptr;

void List::insert(Person *person)
{

    if (head_ == nullptr)
    {
        head_ = person;
        person->next = nullptr;
    }
    else
    {
        person->next = person_head;
        head_ = person;
    }
}

Person *List::check_for_person(long long int JMBG_function)
{
    Person *current = person_head;

    while (current)
    {
        if (current->JMBG_ == JMBG_function)
        {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}
void List::print_with_JMBG(long long int function_JMBG)
{
    Guest *current = guest_head;

    if (guest_head == nullptr)
    {
        std::cout << "Guest list is empty" << std::endl;
    }
    else
    {
        while (current)
        {
            if (current->JMBG_ == function_JMBG)
            {
                std::cout << "JMBG:" << current->JMBG_;
                std::cout << "\n";
                std::cout << "Name:" << current->name_;
                std::cout << "\n";
                std::cout << "Address:" << current->address_;
                std::cout << "\n";
                std::cout << "Room:" << current->room_;
                std::cout << "\n";
                std::cout << "Number of reservation:" << current->number_of_reservtion_;
                std::cout << "\n";
                std::cout << "**********" << std::endl;
            }
        }
    }
}