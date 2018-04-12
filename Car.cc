#include "Car.h"

Car::Car(string ma, string mo, string col, int y, int m): Vehicle(ma, mo, col, y, m) { }


string Car::toString() const {
    ostringstream output, make_model;
    make_model << getMake() << " " << getModel();

    output << "\t" << setw(7) << getColour() << " " << getYear() << " " << setw(17);
    output << make_model.str() << " (" << getMileage() << "km)" << endl;
  
    return output.str();
}

// ostream& operator<<(ostream& output, Vehicle& v)
// {
//    output << v.toString();
  
//     return output;
// }
