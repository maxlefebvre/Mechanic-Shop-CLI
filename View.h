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
        void promptVehicleType(int&);
        void displayInvalid();
        void promptVehicleInfo(string&, string&, string&, int&, int&);          // Car
        void promptVehicleInfo(string&, string&, string&, int&, int&, int&);    // Truck
        void promptVehicleInfo(string&, string&, string&, int&, int&, string&);   // Motorcyle
        void promptVehicle(int, int&);
        void printMechanics(LinkedList<Mechanic>&) const;
    private:
        int readInt() const;
};

#endif
