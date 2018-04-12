#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

using namespace std;

class Motorcycle : public Vehicle {

    //friend ostream& operator<<(ostream&, Vehicle&);

    public:
        Motorcycle(string, string, string, int, int, bool);
        virtual string toString() const;
        bool getSidecar() const;
    private:
        bool sidecar;
};

#endif
