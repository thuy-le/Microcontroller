#include "utilities.h"
#include "options.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

void createMC(string mcType, std::list<Microcontroller*> *MCs){
    cout << mcType << " selected" << endl;    
    if(MCs->size() == 3) return;
    for(std::list<Microcontroller*>::iterator it = MCs->begin(); it != MCs->end(); it++){
        string name = (*it)->getName();
        name = toUpperStr(name);
        mcType = toUpperStr(mcType);
        if(name.compare(mcType) == 0) return;
    }
    MCs->push_back(MCFactory(mcType));    
}

void displayMemory(){
    cout << "Display memory" << endl;
}

void executeFromPC(){
    cout << "Execute from PC" << endl;
}

void executeFromLocation(){
    cout << "Execute from location" << endl;
}

void displayHelp(){
    std::ifstream helpFile("help.txt");
    if (!helpFile)
    {
        std::cerr << "Help is unavailable at the moment. Sorry!" << endl;
        return;
    }
    while (helpFile)
    {
        std::string line;
        getline(helpFile, line);
        cout << line << endl;
    }
}

void searchMemory(){
    cout << "Search memory" << endl;
}

void modifyMemory(){
    cout << "Modify memory" << endl;
}

void resetMC(){
    cout << "Reset Microcontroller" << endl;
}

void displayStatus(){
    cout << "Display status" << endl;
}
