#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "hotel.hpp"
#include "Person.h"
#include "Guest.h"
#include "List.h"

Person psn;

int menu()
{
   int answer;

   while (1)
   {
      std::cout << "Choose:\n1.Insert new guest\n2.Insert new employee\n3.Print guests with JMBG\n4.Print all guests\n5.Print all employe\n6.Delete guest\n7.Delete employee\n8.Clear list\n0.Exit\n";
      std::cin >> answer;
      switch (answer)
      {
      case 1:
         insert_guest();
         break;
      case 2:
         break;
      case 3:
         break;
      case 4:
         break;
      case 5:
         break;
      case 6:
         break;
      case 7:
         break;
      case 8:
         break;
      case 0:
         exit(0);
         break;
      default:
         std::cout << "Error \n";
      }
   }
}

int main()
{
   menu();
}

void insert_guest()
{
   long long int JMBG_function;

   std::cout << "Enter JMBG \n";
   std::cin >> JMBG_function;
   List lst;
   Person *check = lst.check_for_person(JMBG_function);
   if (check == nullptr)
   {
      psn.insert_person();
   }
   else
   {
      int room_function;
      int number_of_reservation_function;

      std::cout << "Enter room \n";
      std::cin >> room_function;
      std::cout << "Enter number of reservation" << std::endl;
      std::cin >> number_of_reservation_function;
      Guest new_guest(room_function, number_of_reservation_function);
      std::cout << "New guest added to list" << std::endl;
   }
}
