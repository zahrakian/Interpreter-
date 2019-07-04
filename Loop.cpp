//
// Created by shadowkian on 7/4/19.
//

#include "Loop.h"
void Loop :: RunLoop(){
    if (Lt == WHILE){
        while (LoopConditionIsTrue){
            Run (LoopExpretion);
        }
    }

    else if(Lt == FOR ){
        while (LoopConditionIsTrue){
            Run (LoopExpretion);
        }

    }
    else
        return ERROR() ;
}
