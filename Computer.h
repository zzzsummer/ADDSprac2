#pragma once
#include <iostream>
#include <cstdlib>
class Computer
{
public:
    Computer(){
        move = ' ';
    }
    char makeMove(){
        char move;
        move = rand() % 3 + 'r';
        return move;
    }
private:
    char move;
};

