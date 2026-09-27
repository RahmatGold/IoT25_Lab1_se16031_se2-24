#include "Arduino.h"
#include <iostream>
#define GREEN_LED_PIN 27
#define BUTTON 25

/****************************************************/

int state = 0;
bool previousButtonState = LOW;

void setup(void) 
{
    pinMode(GREEN_LED_PIN, OUTPUT); // RED LED
    pinMode(BUTTON,INPUT); // Button
    
}


/****************************************************/
void loop(void) 
{

    bool currentButtonState = digitalRead(BUTTON);

    if (currentButtonState == HIGH && previousButtonState == LOW)
    {
        state = !state;
    }

    previousButtonState = currentButtonState;

    digitalWrite(GREEN_LED_PIN, state);

    delay(20);
}