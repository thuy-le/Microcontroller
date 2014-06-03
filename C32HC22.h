/* 
 * File:   C32HC22.h
 * Author: PC
 *
 * Created on March 27, 2013, 4:14 PM
 */

#ifndef C32HC22_H
#define	C32HC22_H

#include "Microcontroller.h"

class C32HC22 : public Microcontroller{
public:
    C32HC22();
    C32HC22(const C32HC22& orig);
    virtual ~C32HC22();
    void reset();
    void execute();
private:

};

#endif	/* C32HC22_H */
