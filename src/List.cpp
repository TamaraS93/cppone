#include "List.h"
#include "Person.h"

Person *person_head = nullptr;

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