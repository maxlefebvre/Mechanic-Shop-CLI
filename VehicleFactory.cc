#include "VehicleFactory.h"


Vehicle* VehicleFactory::create(string ma, string mo, string col, int y, int m) { return new Car(ma, mo, col, y, m); }
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y, int m, int ax) { return new Truck(ma, mo, col, y, m, ax); }
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y, int m, bool side) { return new Motorcycle(ma, mo, col, y, m, side); }