/* 
 * File:   R500.cpp
 * Author: PC
 * 
 * Created on March 26, 2013, 2:19 PM
 */

#include "PIC32F42.h"
#include "Microcontroller.h"
#include <iostream>

PIC32F42::PIC32F42(){
    PIC32F42::setStatusString("PIC32F42 start");
    name = "PIC32F42";
}

PIC32F42::PIC32F42(const PIC32F42& orig) {
}

PIC32F42::~PIC32F42() {
}

void PIC32F42::reset(){
    std::cout << "PIC32F42 Reset - ";
    PIC32F42::setProgramCounter(1);
    std::cout << "Program counter: " << PIC32F42::getProgramCounter() << std::endl;
}

void PIC32F42::execute(){
    std::cout << "PIC32F42 execute" <<std::endl;
}
