/* 
 * File:   R500.h
 * Author: PC
 *
 * Created on March 26, 2013, 2:19 PM
 */

#ifndef R500_H
#define	R500_H
#include "Microcontroller.h"
class R500: public Microcontroller{
public:
    R500();
    R500(const R500& orig);
    virtual ~R500();
    void reset();
    void execute();
};

#endif	/* R500_H */

