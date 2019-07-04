//
// Created by shadowkian on 7/4/19.
//

#ifndef INTERPRETER_ENGIN_LOOP_H
#define INTERPRETER_ENGIN_LOOP_H

enum LoopType {
    WHILE, FOR
};

class Loop {
private :
    LoopType Lt ;
    bool LoopConditionIsTrue ;
    Interpreter LoopCondition ;
    Interpreter LoopExpretion ;
public :
    void RunLoop();
};


#endif //INTERPRETER_ENGIN_LOOP_H
