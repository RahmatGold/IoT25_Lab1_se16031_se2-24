#include "Arduino.h"

#define SENSOR 33
#define BLUE_LED_PIN 14
#define GREEN_LED_PIN 27
#define YELLOW_LED_PIN 12
#define RED_LED_PIN 26

/****************************************************/
void setup(void) 
{
    Serial.begin(115200);
}


/****************************************************/
void loop(void) 
{
    int sensorVal = analogRead(SENSOR);

    if(sensorVal>=0 && sensorVal <1024){
        analogWrite(BLUE_LED_PIN,HIGH);
        analogWrite(GREEN_LED_PIN,LOW);
        analogWrite(YELLOW_LED_PIN,LOW);
        analogWrite(RED_LED_PIN,LOW);
    }
    else if(sensorVal>=1024 && sensorVal < 2047){
        analogWrite(BLUE_LED_PIN,LOW);
        analogWrite(GREEN_LED_PIN,HIGH);
        analogWrite(YELLOW_LED_PIN,LOW);
        analogWrite(RED_LED_PIN,LOW);
    }
    else if(sensorVal>=2048 && sensorVal < 3071){
        analogWrite(BLUE_LED_PIN,LOW);
        analogWrite(GREEN_LED_PIN,LOW);
        analogWrite(YELLOW_LED_PIN,HIGH);
        analogWrite(RED_LED_PIN,LOW);
    }
    else{
        analogWrite(BLUE_LED_PIN,LOW);
        analogWrite(GREEN_LED_PIN,LOW);
        analogWrite(YELLOW_LED_PIN,LOW);
        analogWrite(RED_LED_PIN,HIGH);
    }


    delay(500);
    
}
