#pragma once
#include "Human.h"
#include "Computer.h"
class Referee
{
public:
    Referee(){

    };
    char Game(Human* human, Computer* computer){
        char humanMove = human->makeMove();
        char computerMove = computer->makeMove();
        if (humanMove == 'r' && computerMove == 's'){
            return 'W';
        }
        else if (humanMove == 's' && computerMove == 'p'){
            return 'W';
        }
        else if (humanMove == 'p' && computerMove == 'r'){
            return 'W';
        }
        else if (humanMove == computerMove){
            return 'T';
        }
        else{
            return 'L';
        }
    };
};
    

