#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

class Vehicle {

    friend ostream& operator<<(ostream&, Vehicle&);

    public:
        Vehicle(string, string, string, int, int);
    
        string getMake() const;
        string getModel() const;
        string getColour() const;
        int getYear() const;
        int getMileage() const;
        virtual string toString() const = 0;

        bool operator<(Vehicle&);
        bool operator>(Vehicle&);

    private:
        string make;
        string model;
        string colour;
        int year;
        int mileage;
};

#endif
