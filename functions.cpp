/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* functions module that describes function definitions
* used throught main.cpp
**********************/

#include "functions.h"


void displayFirearm(Firearm *make) {

    std::cout << make->getBrand() << std::endl;
    std::cout << make->getBulletCount() << std::endl << std::endl;


}

void displayPistol(Pistol *make) {

    std::cout << make->getBrand() << std::endl;
    std::cout << make->getBulletCount() << std::endl;
    std::cout << make->getStockLengthInches() << std::endl << std::endl;

}