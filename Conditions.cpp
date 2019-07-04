//
// Created by shadowkian on 7/4/19.
//

#include "Conditions.h"
void Conditions :: Runner (){
    if(IfIsTrue)
        IfExpretion.Run() ;
    else
        ElseExpretion.Run() ;
}