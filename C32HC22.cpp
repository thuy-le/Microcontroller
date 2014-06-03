/* 
 * File:   C32HC22.cpp
 * Author: PC
 * 
 * Created on March 27, 2013, 4:14 PM
 */

#include "C32HC22.h"
#include "Microcontroller.h"
#include <iostream>

C32HC22::C32HC22() {
    C32HC22::setStatusString("32HC22 start");
    name = "32HC22";
}

C32HC22::C32HC22(const C32HC22& orig) {
}

C32HC22::~C32HC22() {
}

void C32HC22::reset(){
    std::cout << "32HC22 Reset - ";
    C32HC22::setProgramCounter(1);
    std::cout << "Program counter: " << C32HC22::getProgramCounter() << std::endl;
}

void C32HC22::execute(){
    std::cout << "32HC22 execute" <<std::endl;
}
