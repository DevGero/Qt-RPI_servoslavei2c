# Qt-RPI_bmp180sensor

An example program using Qt widgets and Raspberry Pi to control Servo motors using a I2C slave servo controller. The example provide a class that represent the i2c servo controller. Also, implement a Demo on Qt on how tu use an instance of the class for the i2c servo controller. 
The Demo control four motors. It allow to configure the limits of the working angles for each motor.
Fo using in your own project copy the .h and .cpp 'servoslavei2c'

* [Qt5 Homepage](https://www.qt.io/)
* [wiringPiI2C](http://wiringpi.com/reference/i2c-library/)
* [servoslaveI2C](http://www.hobbytronics.co.uk/servo-controller-12ch-ht?keyword=i2c)

# Making the DEMO work

Hardware
--------------
Power (pin 1) -> pin 5 V

SDA (pin 13)   -> GPIO2 (8)

SCL (pin 11)   -> GPIO3 (9)

GND   -> any ground pin

SERVO6 (pin 19) -> signal of motor A

SERVO7 (pin 18) -> signal of motor B

SERVO8 (pin 16) -> signal of motor C

SERVO9 (pin 15) -> signal of motor D

The RPI can not handle that amount of current so a power supply will be need it. Remeber to have commun ground between the power supply and the RPI

Software
-----

To clone the git repository:

    git clone https://github.com/DevGero/Qt-RPI_servoslavei2c.git  

To build:

    cd Qt-RPI_servoslavei2c/
    qmake
    make

To run

    ./ServoIC_I2C_Controller

