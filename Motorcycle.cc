#include "Motorcycle.h"

Motorcycle::Motorcycle(string ma, string mo, string col, int y, int m, bool side): Vehicle(ma, mo, col, y, m), sidecar(side) { }

bool Motorcycle::getSidecar() const { return sidecar; }

string Motorcycle::toString() const {
    ostringstream output, make_model;
    make_model << getMake() << " " << getModel();

    output << "\t" << "MOTORCYCLE: " << setw(7) << getColour() << " " << getYear() << " " << setw(17);
    output << make_model.str() << " (" << getMileage() << "km)";

    if(sidecar)
        output << ", has sidecar";
    else
        output << ", doesn't have sidecar";

    output << endl;
  
    return output.str();
}
