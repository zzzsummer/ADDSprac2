#include "Computer.h"

Computer::Computer()
{
}

char Computer::makeMove(){
        char move;
        move = rand() % 3 + 'r';
        return move;
    }
