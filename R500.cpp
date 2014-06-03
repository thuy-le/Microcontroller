/* 
 * File:   R500.cpp
 * Author: PC
 * 
 * Created on March 26, 2013, 2:19 PM
 */

#include "R500.h"
#include "Microcontroller.h"
#include <iostream>

R500::R500() {
    R500::setStatusString("R500 start");
    name = "R500";
}

R500::R500(const R500& orig) {
}

R500::~R500() {
}

void R500::reset(){
    std::cout << "R500 Reset - ";
    R500::setProgramCounter(0);
    std::cout << "Program counter: " << R500::getProgramCounter() << std::endl;
}

void R500::execute(){
    std::cout << "R500 execute" <<std::endl;
}
