#include "Truck.h"

Truck::Truck(string ma, string mo, string col, int y, int m, int ax): Vehicle(ma, mo, col, y, m), axles(ax) { }

int Truck::getAxles() const { return axles; }

string Truck::toString() const {
    ostringstream output, make_model;
    make_model << getMake() << " " << getModel();

    output << "\t" << "TRUCK: "<< setw(12) << getColour() << " " << getYear() << " " << setw(17);
    output << make_model.str() << " (" << getMileage() << "km), " << getAxles() << " axles" << endl;
  
    return output.str();
}
