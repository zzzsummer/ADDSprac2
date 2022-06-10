#pragma once
#include "Human.h"
#include "Computer.h"
class Referee
{
public:
    Referee(){

    }
    char refGame(Human player1,Computer player2){
        char player1Move = player1.makeMove();
        char player2Move = player2.makeMove();
        if (player1Move == 'r'){
            return 'T';
        }
        else if (player1Move == 's'){
            return 'L';
        }
        else if (player1Move == 'p' ){
            return 'W';
        }
       
    }
};   



    
