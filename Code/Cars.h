//
// Created by Krysta Parker.
//

#ifndef COURSEPROJECT_STARTING_CODE_2_CAR_H
#define COURSEPROJECT_STARTING_CODE_2_CAR_H


class Car {
private:
    int id;
    int row;
    int column;
    int maxSpeed;
    int rowVelocity;
    int columnVelocity;
public:
    Car(int idNum, int rowPos, int colPos);
    void updateVelocity(int newRow, int newCol);
    void updatePosition();

};


class UserCar : public Car{


};

class CPU1Car : public Car{

};
class CPU2Car : public Car{

};

#endif //COURSEPROJECT_STARTING_CODE_2_CAR_H
