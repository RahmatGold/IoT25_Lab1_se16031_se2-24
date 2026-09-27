#include "Arduino.h"

/****************************************************/
#define SENSOR 33

void setup(void) 
{
    Serial.begin(115200);
}


/****************************************************/
void loop(void) 
{
    int sensorState = analogRead(SENSOR);

    Serial.println(sensorState);

    delay(500);
}
