/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* Header file for Firearm.cpp class file that 
# includes iostream and defines BULLETS and BRAND
**********************/

#ifndef CLASSES_FIREARM_H
#define CLASSES_FIREARM_H

#include <iostream>
#include <cctype>

#define BULLETS 0
#define BRAND "Generic"

class Firearm {

    public:

        Firearm(); //Default constructor

        Firearm(const char*, int);   //Overloaded constuctor



        //Getters

        int getBulletCount();

        const char* getBrand();


        //Setters

        void setBulletCount(int);

        void setBrand(const char*);



    protected:


        int bullets;

        const char* brand;

};


#endif //CLASSES_FIREARM_H
