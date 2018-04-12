#ifndef SHOP_H
#define SHOP_H

#define MAX_MECHANICS    5

#include "Mechanic.h"
#include "Customer.h"
#include "LinkedList.h"

class Shop{

    public:
        Shop();
        ~Shop();
        //void addCustomer(Customer*);
        Shop& operator+=(Customer*);  
		Shop& operator-=(Customer*);      
        Shop& operator+=(Mechanic*);
        Customer* getCustomer(int);
        LinkedList<Customer>& getCustomers();
        LinkedList<Mechanic>& getMechanics();

    private:
        LinkedList<Customer> customers;
        LinkedList<Mechanic> mechanics;
};

#endif
