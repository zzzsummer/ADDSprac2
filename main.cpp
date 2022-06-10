#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    Computer computer;
    Human human;
    Referee referee;
    cout << referee.Game(&human, &computer);

}