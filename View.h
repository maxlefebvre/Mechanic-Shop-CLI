#ifndef VIEW_H
#define VIEW_H

#include "LinkedList.h"
#include "Customer.h"
#include "Mechanic.h"

class View {

    public:
        void mainMenu(int&);
        void printCustomers(LinkedList<Customer>&) const;
        void pause() const;
        void promptUserInfo(string&, string&, string&, string&);
        void promptUserId(int&);
        void displayInvalid();
        void promptVehicleInfo(string&, string&, string&, int&, int&);
        void promptVehicle(int, int&);
        void printMechanics(LinkedList<Mechanic>&) const;
    private:
        int readInt() const;
};

#endif
