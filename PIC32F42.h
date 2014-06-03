/* 
 * File:   PIC32F42.h
 * Author: PC
 *
 * Created on March 27, 2013, 1:50 PM
 */

#ifndef PIC32F42_H
#define	PIC32F42_H

#include "Microcontroller.h"
class PIC32F42 : public Microcontroller {
public:
    PIC32F42();
    PIC32F42(const PIC32F42& orig);
    virtual ~PIC32F42();
    void reset();
    void execute();
private:

};

#endif	/* PIC32F42_H */

