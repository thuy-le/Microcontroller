#include "utilities.h"

using std::string;
string trim(string s){
    std::remove(s.begin(), s.end(), ' ');
    std::remove(s.begin(), s.end(), '\n');
    std::remove(s.begin(), s.end(), '\0');
    return s;
}

string toUpperStr(string s){
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}

void clearInput(){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Microcontroller* MCFactory(std::string mcType){
    mcType = toUpperStr(mcType);
    if(mcType == "R500") return new R500();
    else if(mcType == "PIC32F42") return new PIC32F42();
    else if(mcType == "34HC22") return new C32HC22();
    else return NULL;
}
