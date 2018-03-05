#include "servoslavei2c.h"

int fd;

void I2C_writeByte(int reg, int val){
    wiringPiI2CWriteReg8(fd,reg,val);
}

void setup_servocontrol(char m){
    I2C_writeByte(MODE_REG,m);
    delay(1);
}

ServoMotor::ServoMotor(int adr,  int _p, int _la, int _an){
    addr = adr;

    angle_limit = _an;
    l_angle_limit = _la;

    if(_p < l_angle_limit || _p > angle_limit)
        _p = (int)(l_angle_limit + angle_limit)/2;

    int pos = (int)_p*HIGH_LIMIT/_an;
    if(pos < LOW_LIMIT || pos > HIGH_LIMIT)
        pos = (int)(LOW_LIMIT+HIGH_LIMIT)/2;
    I2C_writeByte(adr, pos);
    delay(1);

    position = pos;
}

void ServoMotor::setAddr(int adr){
    addr = adr;
}

void ServoMotor::setPosition(int _p){
    int pos = (int)_p*HIGH_LIMIT/180;

    if(pos < LOW_LIMIT || pos > HIGH_LIMIT)
        pos = (int)(LOW_LIMIT+HIGH_LIMIT)/2;

    I2C_writeByte(addr, pos);
    delay(1);

    position = pos;
}

//***********************************************

ServoController::ServoController(int _icadr, int _m){

    wiringPiSetup();
    fd = wiringPiI2CSetup(_icadr);

    setup_servocontrol(_m);
    
    motors = new ServoMotor*[AMOUNT_LIMIT];

    for(int i = 0; i < AMOUNT_LIMIT; i++){
        motors[i] = new ServoMotor(i);
    }
}

bool ServoController::motorExist(int adr){
    return (motors[adr] != NULL);
}

void ServoController::addMotor(int adr, int _p,int _la, int _an){
       //re-config existent motor
        motors[adr]->setAddr(adr);        
        motors[adr]->setPosition(_p);
        motors[adr]->setAnglelimit(_la, _an);   
}

bool ServoController::removeMotor(int adr){
    if(motorExist(adr)){
        delete motors[adr];
        return true;
    }
    return false;
}

void ServoController::motorPos(int adr, int _p){
    if(adr < 0 || adr > AMOUNT_LIMIT)
        return;
    motors[adr]->setPosition(_p);
}

void ServoController::allmotorPos(int _p){
    for(int i = 0; i < AMOUNT_LIMIT;i++){
        motors[i]->setPosition(_p);
    }
}

ServoController::~ServoController(){
    for(int i = 0; i < AMOUNT_LIMIT; i++){
        if(motorExist(i))
            delete motors[i];
    }
    delete motors;
}
