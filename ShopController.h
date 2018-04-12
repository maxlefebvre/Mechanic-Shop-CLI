#ifndef SHOPCONTROLLER_H
#define SHOPCONTROLLER_H

#include "View.h"
#include "Shop.h"
#include "VehicleFactory.h"

class ShopController {

    public:
        ShopController();
        void launch();
    private:
        Shop mechanicShop;
        View view;
        VehicleFactory* factory;
        void initShop();
};

#endif
