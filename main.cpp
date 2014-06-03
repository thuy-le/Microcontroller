/* 
 * File:   main.cpp
 * Author: PC
 *
 * Created on March 26, 2013, 1:29 PM
 */

#include <cstdlib>
#include "main.h"
#include "utilities.h"
#include "options.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    string c;
    char ch;
    string mcType = "";
    std::list<string> mcList;
    std::list<Microcontroller*> MCs;    
    loadMCs(&mcList);        
    do{
        cout << std::hex <<  "Please type a command" << endl;
        cout << "> ";
        getline(cin, c);
        c = trim(c);
        if(c.length() == 0){
            cout << "Exit program..." << endl;
            return EXIT_SUCCESS;
        }
        if(c.length() != 1){
            cout << "Invalid command" << endl;
            continue;
        }        
        ch = c[0];
        switch(tolower(ch)){            
            case 'c': while(true){
                          cout << "Please choose a microcontroller to connect" << endl;
                          cout << "* Notice: Only the following microcontrollers are supported:" << endl;
                          for(std::list<string>::iterator it = mcList.begin(); it != mcList.end(); it++){
                              cout << "* " << (*it) << endl;
                          }
                          cout << "> ";
                          getline(cin, mcType);
                          mcType = trim(mcType);
                          mcType = toUpperStr(mcType);
                          if(mcType.length() == 0){
                              break;
                          }                          
                          else if((mcType.compare("") == 0) || (mcType.compare("PIC32F42") == 0) 
                                  || (mcType.compare("34HC22") == 0)){
                              createMC(mcType, &MCs);
                              break;
                          }                        
                          else{
                              for(std::list<string>::iterator it = mcList.begin(); it != mcList.end(); it++){
                                string s = (*it);
                                s = trim(s);
                                cout << mcType << " ";
                                cout << s << endl;
                                cout << mcType.size() << " " << s.size() << endl;
                                if(mcType.compare(s) == 0) createMC(mcType, &MCs);
                              }
                          }
                          std::cerr << "Invalid microcontroller type" << endl;
                      }                      
                      for(std::list<Microcontroller*>::iterator it = MCs.begin(); it != MCs.end(); it++){
                        cout << (*it)->getName() << endl;
                      }
                      break;
            case 'd': displayMemory();
                      break;
            case 'e': executeFromPC();
                      break;
            case 'g': executeFromLocation();
                      break;
            case 'h': displayHelp();
                      break;
            case 'l': searchMemory();
                      break;
            case 'm': modifyMemory();
                      break;
            case 'r': resetMC();
                      break;
            case 's': displayStatus();
                      break;
            case 'q': cout << "Exiting..." << endl;
                      break;
            default: std::cerr << "Invalid command" << endl;
                     break;
        }
    }while(ch != 'q');
    return 0;
}

void loadMCs(std::list<string> *mcList){
    std::ifstream mcs("mc.txt");
    if (!mcs)
    {
        std::cerr << "Microcontroller list is unavailable at the moment. Sorry!" << endl;
        return;
    }
    std::string line;
    while (getline(mcs, line))
    {
        trim(line);
        mcList->push_back(line);
    }
}
