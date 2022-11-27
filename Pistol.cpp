/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* Pistol class definitions
**********************/

#include "Pistol.h"

// //Default Constructor
Pistol::Pistol() {

    setBulletCount(BULLETS);

    setBrand(BRAND);

    setStockLengthInches(STOCK_LENGTH_INCHES);

}

//Overload Constructor
Pistol::Pistol(const char* make, int ammo, int length) {

    setBrand(make);


    setBulletCount(ammo);


    setStockLengthInches(length);


}



//Getters
int Pistol::getStockLengthInches() {

    return stockLengthInches;

}



std::string Pistol::getBrand() {

    return brand;

}



//Setter
void Pistol::setStockLengthInches(int length) {

    if (length > STOCK_LENGTH_INCHES) {

        stockLengthInches = length;

    }

    else {

        stockLengthInches = STOCK_LENGTH_INCHES;

    }

    
}
