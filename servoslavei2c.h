#ifndef SERVOSLAVEI2C_H
#define SERVOSLAVEI2C_H

#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <stdio.h>

//Address not FIX. If change externally change in here as well.
#define SERCONT_ADDRESS 0x28

//MODES
#define MODE_STND  0
#define MODE_EXTND 1

//Mode Register
#define MODE_REG 0x14

//Limit Values
#define LOW_LIMIT 0
#define HIGH_LIMIT 255
#define AMOUNT_LIMIT 12

//Servo address
#define SERVO_0  0
#define SERVO_1  1
#define SERVO_2  2
#define SERVO_3  3
#define SERVO_4  4
#define SERVO_5  5
#define SERVO_6  6
#define SERVO_7  7
#define SERVO_8  8
#define SERVO_9  9
#define SERVO_10 0xA
#define SERVO_11 0xB

class ServoMotor{
protected:
    int addr;
    int position;
    int angle_limit;
    int l_angle_limit;
public:
    ServoMotor(int , int i = 90,int l = 0, int h = 180);

    void setAddr(int a);
    void setPosition(int);
    void setAnglelimit(int _lan, int _an){l_angle_limit = _lan, angle_limit = _an;}

    char getPosition(){return position;}
    int getAnglelimit(){return angle_limit;}
    int getLanglelimit(){return l_angle_limit;}
    char getAddr(){return addr;}
};

class ServoController{
protected:
    ServoMotor** motors;
public:
    ServoController(int a = 0x28, int m = 1); //Especified Working Mode
    ~ServoController();

    void addMotor(int , int i = 90, int l = 0, int h = 180);
    bool removeMotor(int);

    bool motorExist(int);

    void motorPos(int, int);
    void allmotorPos(int);
};
#endif // SERVOSLAVEI2C_H
