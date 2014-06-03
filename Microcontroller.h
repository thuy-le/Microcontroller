/* 
 * File:   Microcontroller.h
 * Author: PC
 *
 * Created on March 26, 2013, 1:50 PM
 */

#ifndef MICROCONTROLLER_H
#define	MICROCONTROLLER_H

#include <string>

class Microcontroller {
public:
    Microcontroller();
    Microcontroller(const Microcontroller& orig);
    virtual ~Microcontroller();
    virtual void reset() = 0;
    virtual void execute() = 0;
    std::string getStatusString(){
        return statusString;
    }
    void setStatusString(std::string s){
        statusString = s;
    }
    int getProgramCounter(){
        return programCounter;
    }
    void setProgramCounter(int pc){
        programCounter = pc;
    }
    std::string getName(){
        return name;
    }
private:
    int programCounter;
    unsigned char memory[];
    std::string statusString;
    bool isSelected;
protected:
    std::string name;    
};

#endif	/* MICROCONTROLLER_H */

