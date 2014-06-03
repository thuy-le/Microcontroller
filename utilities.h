/* 
 * File:   utilities.h
 * Author: PC
 *
 * Created on March 27, 2013, 10:54 PM
 */

#ifndef UTILITIES_H
#define	UTILITIES_H
#include "main.h"

std::string trim(std::string s);
std::string toUpperStr(std::string s);
void clearInput();
Microcontroller* MCFactory(std::string mcType);

#endif	/* UTILITIES_H */

