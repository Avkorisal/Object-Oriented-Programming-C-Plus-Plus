#include "RPG.h"
#include <iostream>


/**
*@brief Displays who wins based on who is alive. Use an if statement to check 
*whether player 1 is alive. If so, print that they won, else player 2 won.
*
*Example Output:
*Wiz defeated NPC! Good game!\n
*
*@param player1
*@param player2
*/

void displayEnd(RPG player1, RPG player2){
    if(player1.isAlive()){
        cout << player1.getName() << " defeated " << player2.getName() << "! Good game!\n";
    }else{
        cout << player2.getName() << " defeated " << player1.getName() << "! Good game!\n";
    }
}


/** 
* @brief Prints both player's name and their health.
* Example Output for names Wiz and NPC
* Wiz health: 75 NPC health: 100\n
*
* @param player1
* @param player2
*/

void displayStats (RPG player1, RPG player2){

    cout <<player1.getName()<<" health: "<<player1.getHealth();
    cout <<" " << player2.getName()<<" health: "<<player2.getHealth() << "\n";
    //cout << player1.isAlive();
    //cout << player2.isAlive();
    
    //player1.updateHealth(100);
    //player2.updateHealth(70);
}

    
/**
*@brief uses a while loop to check whether both players are alive.
*If so, it calls displayStats((*player1), (*player2))
*Inside the while loop it:
*Then prints the name of player one to say that it is their turn
*Then call (*player1).useSkill(player2)
*Then prints "-----------------------------\n"
*
*Repeat the process for player 2 acting on player 1 inside the same while loop
*Then prints the name of player two to say that it is their turn
*Then call (player2).useSkill(player1)
*Then prints "------------------------------\n"
*
Refer to the Role Playing Game Part Two instructions for the example output
*
*@param player1
*@param player2
*/

void gameLoop(RPG * player1, RPG * player2){
    while ((*player1).isAlive() && (*player2).isAlive())
    {
        displayStats((*player1), (*player2));
        cout << (*player1).getName() <<"\n";
        (*player1).useSkill(player2);
        printf("----------------------------------\n");
        cout << (*player2).getName()<<"\n";
        (*player2).useSkill(player1);
        printf("----------------------------------\n");
    }
    
}

int main(){
    RPG p1 = RPG("Wiz",70,45,15,"mage" );
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(p1,p2);
    return 0;

}