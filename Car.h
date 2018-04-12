#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {

    //friend ostream& operator<<(ostream&, Vehicle&);

    public:
        Car(string, string, string, int, int);
        virtual string toString() const;

};

#endif
