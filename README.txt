**************************************************************************
Author: Maximillian Lefebvre
Student ID: 101033745
Date: April 8th, 2018

Purpose: 
Small program to keep track of customers and car info. Makes use of linkedLists, inheritance and operator overloading, factory classes and templates. 
Users can add and remove customers and vehicles of any type (car, truck, motorcyle) or print customers or mechanics by using the menu options displayed when running the program.

File structure:
Person.cc and Person.h: Base class for mechanic and customer classes to inherit from holds basic data (name, number, address, etc)
Mechanic.cc and Mechanic.h: Mechanic class, inherits from person and has id starting at 5000
LinkedList.cc and LinkedList.h: LinkedList using templates that holds vehicles, mechanics and customers in this program and stores them in order based off the < operator,
Customer.cc and Customer.h: Customer class, inherits from Person, has id starting at 1000 and a vehicleslist assigned to them.
Vehicle.cc and Vehicle.h: Vehicle abstract class.
Car.cc and Car.h: Car class inherits from vehicle and implements tostring function.
Truck.cc and Truck.h: Truck class inherits from vehicle and implements tostring function.
Motorcycle.cc and Motorcycle.h: Motorcycle class inherits from vehicle and implements tostring function.
Shop.cc and Shop.h: Shop class
ShopController.cc and ShopController.h: ShopController class
View.cc and View.h: view class to display menu on terminal to user
defs.h: cotains return codes, such as C_OK and C_NOK
main.cc: main program to execute

Compilation Instructions:
To compile the source code use the make command:
make

To execute then use the following:
./mechanicshop

Example:
make
./mechanicshop

To clean up object files and the execute use:
make clean
