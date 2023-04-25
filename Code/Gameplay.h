//
// Created by Krysta Parker.
//

#ifndef COURSEPROJECT_STARTING_CODE_2_GAMEPLAY_H
#define COURSEPROJECT_STARTING_CODE_2_GAMEPLAY_H


class Gameplay {
public:
    Gameplay();
    //pre:program will display the "CSC Racing" message
    //post:user will choose an option from the menu that will pick from the 4 tracks or exit the program

    //pre: track is picked from menu function and startgame function calls the function in CSCRacing.cpp
    //post: the winner is declared
    void game();

    //pre: a players turn is finished
    //post: if a player/car cross the finish line return true, else return false and if gameEnd is true, display who is the winner
    bool gameEnd();

    //pre: function is called in game function
    //post: return one number between 1-3
    int randomUserStart();

    //pre:
    //post:
    void player();
    //pre:
    //post:
    void cpu1();
    //pre:
    //post:
    void cpu2();


    //delete later
    int randomNum();

    int x;
    int y;
    int option; //used for user input within menu function
};


#endif //COURSEPROJECT_STARTING_CODE_2_GAMEPLAY_H
