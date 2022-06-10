#pragma once
#include <iostream>
class Human
{
public:
    Human(){

    }
    char makeMove(){
        char move;
        std::cout << "Enter move\n";
        std::cin >> move;
        if (move == 'r' || move == 'R'){
            return 'r';
        }
        else if (move == 'p' || move == 'P'){
            return 'p';
        }
        else if (move == 's' || move == 'S'){
            return 's';
        }
        else{
            std::cout << "Invalid move. Try again.\n";
            return makeMove();
        }
    }

    char getMove(){
        return move;
    }

private:
    char move;
};
