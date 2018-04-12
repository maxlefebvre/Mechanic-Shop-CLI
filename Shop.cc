#include "Shop.h"
#include "defs.h"

Shop::Shop() { }

Shop::~Shop() { }

Shop& Shop::operator+=(Customer* c) { 
    customers += c; 
    return *this;
}

Shop& Shop::operator+=(Mechanic* m) { 
    mechanics += m; 
    return *this;
}

Shop& Shop::operator-=(Customer* c) { 
    customers -= c; 
    return *this;
}

Customer* Shop::getCustomer(int id)  {
    for (int i = 0; i < customers.getSize(); ++i){
        if (customers[i]->getId() == id)
            return customers[i];
    }
    return 0;
} 

LinkedList<Customer>& Shop::getCustomers() { return customers; }
LinkedList<Mechanic>& Shop::getMechanics()  { return mechanics; }
