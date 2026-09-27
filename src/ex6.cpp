#include "Arduino.h"

#define BLUE_LED_PIN 14


/****************************************************/
void setup(void) 
{
    Serial.begin(115200);
    pinMode(BLUE_LED_PIN,OUTPUT);
    digitalWrite(BLUE_LED_PIN, LOW);
    Serial.println("Enter 'B' to turn on, 'b' to turn off:");
}


/****************************************************/
void loop(void) 
{
    

    if (Serial.available() > 0) {
        String inputString = Serial.readStringUntil('\n');
        inputString.trim(); 

        if (inputString == "B") {
            
            digitalWrite(BLUE_LED_PIN, HIGH); 
            Serial.println("LED turned ON");
        } 
        else if (inputString == "b") {
            
            digitalWrite(BLUE_LED_PIN, LOW);
            Serial.println("LED turned OFF");
        }  
        else if (inputString.length() > 0) { 
            Serial.println("Wrong input, try again:");
        }
    }
}
