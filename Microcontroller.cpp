/* 
 * File:   Microcontroller.cpp
 * Author: PC
 * 
 * Created on March 26, 2013, 1:50 PM
 */

#include "Microcontroller.h"
#include <iostream>

Microcontroller::Microcontroller() {
    programCounter = 10;
    name = "Default";
    isSelected = false;
}

Microcontroller::Microcontroller(const Microcontroller& orig) {    
}

Microcontroller::~Microcontroller() {
}
