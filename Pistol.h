/*********************
* Michael Johan Rupprecht
* COSC-2436-002
* Pistol class header file that includes Firearm header file
* and defines STOCK_LENGTH_INCHES
**********************/

#ifndef CLASSES_PISTOL_H
#define CLASSES_PISTOL_H


#include "Firearm.h"
#define STOCK_LENGTH_INCHES 0


class Pistol: public Firearm {

    public:


        //Default constructor
        Pistol();


        //Overloaded Constructor
        Pistol(const char*, int, int);



        //Getter
        int getStockLengthInches();


        std::string getBrand();     //Method Override


        //Setter
        void setStockLengthInches(int);




    private:

        int stockLengthInches;

};




#endif //CLASSES_PISTOL_H
