//#include "Person.h"

class Guest : public Person
{
public:
    int room_;
    int number_of_reservtion_;

    //public:
    Guest(int room = 0, int number_of_reservation = 0) : room_(room),
                                                         number_of_reservtion_(number_of_reservation)
    {
    }
    void function_insert_guest();
    void function_print_guest_with_JMBG();
    void function_print_guests() {}
    void function_delete_guest() {}
    void clear_guests() {}
};
