/*
*   English below
*   
*   Libary um einen Temperatur und Luftdrucksensor 
*   für Arduino zu benutzen und zu verwalten
*   
*   Die Libary ist geschrieben für den 
*   BMP180
*   
*   Die Libary soll mit c++ objektorientiert arbeiten,
*   sodass das ganze Handling vom Auslesen in
*   ein entsprechendes Objekt abstrahiert wird.
*
*   Code wurde großteils von einem Git-Hub Repo
*   von Remy Sharps übernommen, welcher das I2C Interface für
*   den BMP180 Implementiert:
*   https://github.com/remy/arduino/blob/master/barometre/barometre.ino
*   
*   Anschlüssen an den Arduino Uno:
*   GRD  -> GRD
*   VCC  -> 3.3V
*   SCL  -> D19 oder A5
*   SDA  -> D18 oder A4
*   
*   
*   
*
*   Libary to manage the reading of temperature and
*   air pressure with the BMP180-chip
*   
*   The libary works object-oriented with c++ 
*   so as to wrap the complete handling of the sensor
*   into a simple object.
*
*   Most of the code was taken from the git-hub repository
*   from Remy Sharps, who implemented the I2C-interface for
*   the BMP180:
*   https://github.com/remy/arduino/blob/master/barometre/barometre.ino
*   
*   Conections to the Arduino Uno:
*   GRD  -> GRD
*   VCC  -> 3.3V
*   SCL  -> D19 or A5
*   SDA  -> D18 or A4
*   
*/
#ifndef BMP_SENSOR_LIB_H
#define BMP_SENSOR_LIB_H

// Imports of Arduino-libaries
#include <Arduino.h>
#include <Wire.h>

class BMPSensorHandler{

    private:
        // * * objectvariables * * //

        #define BMP085_ADDRESS 0x77
        const unsigned char OSS = 0;  // Oversampling Setting

        // Calibration values
        int ac1;
        int ac2;
        int ac3;
        unsigned int ac4;
        unsigned int ac5;
        unsigned int ac6;
        int b1;
        int b2;
        int mb;
        int mc;
        int md;

        // b5 is calculated in bmp085GetTemperature(...), this variable is also used in bmp085GetPressure(...)
        // so ...Temperature(...) must be called before ...Pressure(...).
        long b5; 



        // * * private helpingmethods * * //

        // startUp method : always use in the Set-Up of the Arduino 
        void bmp085Calibration();

        // helpingmethod to calulate the values of the sensor
        int bmp085ReadInt(unsigned char);
        unsigned int bmp085ReadUT();
        float bmp085GetTemperature(unsigned int);
        unsigned long bmp085ReadUP();
        char bmp085Read(unsigned char);
        long bmp085GetPressure(unsigned long);

    public:
        // * * constructor and destructor * * //

        // constructor
        BMPSensorHandler();

        // destructor
        ~BMPSensorHandler();

        // * * instance-methods * * //
        // returns the temperatue in °C
        float getTemperature();
        // returns the pressure in Pa
        float getPressure();
};


#endif
