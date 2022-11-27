/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* A simple classes/objects program that recaps the basic 
* workings pertaining to said classes and objects
**********************/

//Including main.cpp's .h file
#include "main.h"


int main(int argc, char** argv) {

    //Creating a Firearm object with no parameters
    Firearm myFirearm1;

    //Creating a Firearm object with brand "SIG" and bullets 30
    Firearm myFirearm2("SIG", 30);

    //Creating a Pistol object with no parameters
    Pistol myPistol1;

    //Creating a Pistol object with brand "Berretta", bullets 15, and stockSizeInches 0
    Pistol myPistol2("Berretta", 15, 0);

    //examples of passing object by reference
    displayFirearm(&myFirearm1);

    displayFirearm(&myFirearm2);


    displayPistol(&myPistol1);

    displayPistol(&myPistol2);


    return 0;


}
