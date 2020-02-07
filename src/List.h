#include "Person.h"
//#include "Guest.h"

class List
{
public:
    List() : head_{nullptr} {}
    void insert(Person *person);
    Person *check_for_person(long long int JMBG_function);
    void clear() {}
    void print() {}
    void remove() {}

private:
    Person *head_;
};
