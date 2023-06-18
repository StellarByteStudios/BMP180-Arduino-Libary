# BMP180-Arduino-Libary
English below

Libary um einen Temperatur und Luftdrucksensor für Arduino zu benutzen und zu verwalten
Die Libary ist geschrieben für den BMP180
  
Die Libary soll mit c++ objektorientiert arbeiten, sodass das ganze Handling vom Auslesen in ein entsprechendes Objekt abstrahiert wird.
Im Testordner ist ein simpler Arduino-Sketch, welcher die Funktionalitäten der Libary testet, wenn man sie auf einen Arduino Uno mit angeschlossenem Sensor flasht

Code wurde großteils von einem Git-Hub Repo von Remy Sharps übernommen, welcher das I2C Interface für den BMP180 Implementiert:
https://github.com/remy/arduino/blob/master/barometre/barometre.ino

Anschlüssen an den Arduino Uno:  
GRD  -> GRD  
VCC  -> 3.3V  
SCL  -> D19 oder A5  
SDA  -> D18 oder A4  
<br>
<br>
<br>
<br>

Libary to manage the reading of temperature and air pressure with the BMP180-chip

The libary works object-oriented with c++ so as to wrap the complete handling of the sensor into a simple object.
In the test-folder lies an Arduino-sketch, which can be used to test the libary when flashed to an Arduino Uno with connected sensor

Most of the code was taken from the git-hub repository from Remy Sharps, who implemented the I2C-interface for the BMP180:
https://github.com/remy/arduino/blob/master/barometre/barometre.ino

Conections to the Arduino Uno:  
GRD  -> GRD  
VCC  -> 3.3V  
SCL  -> D19 or A5  
SDA  -> D18 or A4  
