//
// Created by shadowkian on 7/3/19.
//

#ifndef INTERPRETER_ENGIN_ENGINE_H
#define INTERPRETER_ENGIN_ENGINE_H
#include <iostream>
#include <vector>
#include <string>
class Engine {
private :
    string Language ;
    vector <string> Symbles ;
public :
    virtual void Run() =0 ;
    void getlang(string lang ) ;
    void MakeToke();
    void getSymble (string arr){
        //  for i in string --> string(i) = Symbles.push_back(i)
    } ;
};


#endif //INTERPRETER_ENGIN_ENGINE_H
