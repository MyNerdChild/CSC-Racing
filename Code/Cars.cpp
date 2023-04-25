//
// Created by Krysta Parker.
//

#include "Cars.h"

/************ CAR *************/
Car::Car(int idNum, int rowPos, int colPos) {
    id = idNum;
    row = rowPos;
    column = colPos;
    maxSpeed = 5;
    rowVelocity = 0;
    columnVelocity = 0;
}


void Car::updateVelocity(int newRow, int newCol) {
    int rowDiff = newRow - row;
    int colDiff = newCol - column;
    rowVelocity = rowDiff / 10;
    columnVelocity = colDiff / 10;
    if (rowVelocity > maxSpeed) {
        rowVelocity = maxSpeed;
    }
    if (columnVelocity > maxSpeed) {
        columnVelocity = maxSpeed;
    }
}

void Car::updatePosition() {
    row += rowVelocity;
    column += columnVelocity;
}

/************ USER CAR *************/
/************ CPU 1 CAR *************/
/************ CPU 2 CAR *************/