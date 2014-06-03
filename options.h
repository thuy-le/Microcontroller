/* 
 * File:   options.h
 * Author: PC
 *
 * Created on March 27, 2013, 11:01 PM
 */

#ifndef OPTIONS_H
#define	OPTIONS_H
#include "main.h"

void createMC(std::string mcType, std::list<Microcontroller*> *MCs);
void displayMemory();
void executeFromPC();
void executeFromLocation();
void displayHelp();
void searchMemory();
void modifyMemory();
void resetMC();
void displayStatus();

#endif	/* OPTIONS_H */

