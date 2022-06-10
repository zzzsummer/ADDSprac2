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
        if (player1Move == 'r' && player2Move == 's'){
            return 'W';
        }
        else if (player1Move == 's' && player2Move == 'p'){
            return 'W';
        }
        else if (player1Move == 'p' && player2Move == 'r'){
            return 'W';
        }
        else if (player1Move == player2Move){
            return 'T';
        }
        else{
            return 'L';
        }
    }
};   
