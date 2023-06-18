/*
*   Test Skript um die BMP180 Libary zu testen
*   
*   Die Libary soll mit c++ Objectorientiert arbeiten,
*   sodass das ganze Handling von Abspeicherungen in
*   ein entsprechendes Objekt abstrahiert wird
*/

// Imports
#include "BMPSensorLib.h"

// variables
BMPSensorHandler* bmpSensor;


void setup() {
  	// set-up serial port
	Serial.begin(9800);

	// set-up sensor-object
	bmpSensor = new BMPSensorHandler();

	Serial.println(F("============= testing of BMP180 libary ============="));

}

void loop() {
	// get data
	float pressure = bmpSensor->getPressure();
	float temperature = bmpSensor->getTemperature();

	// concatenate string
	String dataString = "data of sensor: pressure: ";

	dataString += pressure;
	dataString += " Pc;\t temperature";
	dataString += temperature;

	Serial.println(dataString);

    delay(250);

}
