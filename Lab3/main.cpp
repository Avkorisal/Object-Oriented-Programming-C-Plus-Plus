#include "RPG.h"
#include <iostream>

int main(){
    RPG player1 = RPG();
    RPG player2 = RPG("Wiz",70,45,10,"wiz" );
    cout <<player1.getName()<<" health: "<<player1.getHealth();
    cout <<" " << player2.getName()<<" health: "<<player2.getHealth() << "\n";
    cout << player1.isAlive();
    cout << player2.isAlive();

    player1.updateHealth(100);
    player2.updateHealth(70);

}