//#include "Person.h"

class Guest : public Person
{
private:
    int room_;
    int number_of_reservtion_;

public:
    Guest(int room = 0, int number_of_reservation = 0) : room_(room),
                                                         number_of_reservtion_(number_of_reservation)
    {
    }
    //  Guest *function_insert_guest() { return nullptr; }
    void function_print_guest_with_JMBG() {}
    void function_print_guests() {}
    void function_delete_guest() {}
    void clear_guests() {}
    // Person *function_insert_person(long long int *function_JMBG) { return nullptr; }
};
