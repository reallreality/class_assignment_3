/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* Firearm class definitions
**********************/

#include "Firearm.h"

//Default Constructor
Firearm::Firearm() {

    setBulletCount(BULLETS);
    setBrand(BRAND);


}



//Overloaded constructor
Firearm::Firearm(const char* make, int ammo) {      

    setBrand(make);


    setBulletCount(ammo);

}




//Getters

int Firearm::getBulletCount() {

    return bullets;

}


const char* Firearm::getBrand() {

    return brand;

}




//Setters


void Firearm::setBulletCount(int b) {

    if (b > BULLETS) {

        bullets = b;

    }

    else {

        bullets = BULLETS;

    }

}



void Firearm::setBrand(const char* make) {

    if (isalpha(make[0])) {

        brand = make;

    }

    else {

        brand = BRAND;

    }
}

