//
// Created by Krysta Parker.
//
#include <iostream>
#include "Gameplay.h"
#include "Cars.h"
#include "Racetrack.h"

using namespace std;



Gameplay::Gameplay() = default;


void Gameplay::game() {
    //cout << "game function" << endl;

    int randomNum = randomUserStart();
    cout << randomNum << endl;

    do{
        cout << "CAR ID: 1 Coordinates: 1,1 Max Speed: 5 Velocity: 0,0" << endl
             << "CAR ID: 2 Coordinates: 1,2 Max Speed: 5 Velocity: 0,0" << endl
             << "CAR ID: 3 Coordinates: 1,3 Max Speed: 5 Velocity: 0,0" << endl;

        switch (randomNum) {
            case 1: player();
                    randomNum+=1;   //now equals 2
                    break;
            case 2: cpu1();
                    randomNum+=1;   //now equals 3
                    break;
            case 3: cpu2();
                    randomNum=1;   //now equals 2
                    break;
        }
    }while(gameEnd() == false);

}

void Gameplay::player() {
    int x, y;
    cout << "player's turn" << endl;
    cout << "Enter X Coordinate: ";
    cin >> x;   //0-end
    cout << "Enter X Coordinate: ";
    cin >> y;   //0 - -end

}

void Gameplay::cpu1() {
    cout << "cpu1's turn" << endl;
}

void Gameplay::cpu2() {
    cout << "cpu2's turn" << endl;

}

int Gameplay::randomUserStart() {
    cout << "randomUserStart function" << endl;

    int random_integer;
    int lowest=1, highest=3;
    int range=(highest-lowest)+1;

    srand(time(NULL));

    random_integer = lowest + rand() % range;

    return random_integer;
}

bool Gameplay::gameEnd() {
    cout << "gameEnd function" << endl;
    int rn1 = randomNum();

    if(rn1 == 1){
        cout << "Car 1 wins" << endl;
        return true;
    }
    else if(rn1 == 5){
        cout << "Car 2 wins" << endl;

        return true;
    }
    else if(rn1 == 10){
        cout << "Car 3 wins" << endl;

        return true;
    }
    else{
        return false;
    }
}


//delete later
int Gameplay::randomNum() {
    cout << "rn function" << endl;


    int rn;
    int lowest=1, highest=10;
    int range=(highest-lowest)+1;

    srand(time(NULL));

    rn = lowest + rand() % range;
    cout << rn << endl;

    return rn;
}

/*
 *
// assume the car's current position is stored in currentRow and currentCol,
// and its desired position is stored in desiredRow and desiredCol

// calculate the number of spaces the car moves in each direction
int rowDiff = abs(desiredRow - currentRow);
int colDiff = abs(desiredCol - currentCol);

// update the car's velocities based on the number of spaces it moves
if (rowDiff == 0 && colDiff == 1) { // moving 1 space left or right
    car->columnVelocity++;
} else if (rowDiff == 1 && colDiff == 0) { // moving 1 space up or down
    car->rowVelocity++;
} else if (rowDiff == 0 && colDiff == 2) { // moving 2 spaces left or right
    car->columnVelocity += 2;
    car->rowVelocity = 0; // reset row velocity to 0 since car is not moving up or down
} else if (rowDiff == 2 && colDiff == 0) { // moving 2 spaces up or down
    car->rowVelocity += 2;
    car->columnVelocity = 0; // reset column velocity to 0 since car is not moving left or right
}

 */