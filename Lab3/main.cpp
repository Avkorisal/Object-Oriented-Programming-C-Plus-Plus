#include "RPG.h"
#include <iostream>

int main(){
    RPG player1 = RPG();
    RPG player2 = RPG("Wiz",70,45,10,"wiz" );
    cout << player1.isAlive();
    cout << player2.isAlive();
    player1.updateHealth(100);
    player2.updateHealth(70);

}