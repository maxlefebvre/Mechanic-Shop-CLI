#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {

    // friend ostream& operator<<(ostream&, Vehicle&);

    public:
        Truck(string, string, string, int, int, int);
        virtual string toString() const;
        int getAxles() const;

    private:
        int axles;

};

#endif
