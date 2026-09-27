#include "Arduino.h"

#define SENSOR 33
#define BUTTON 25
#define YELLOW_LED_PIN 12


/****************************************************/
void setup(void) 
{
    Serial.begin(115200);

    pinMode(BUTTON,INPUT);
    pinMode(YELLOW_LED_PIN,OUTPUT);
}


/****************************************************/
void loop(void) 
{
    
    if(digitalRead(BUTTON) == HIGH){
        delay(50);

    // 2. Считываем значение света ОДИН раз и выводим в консоль
        int lightValue = analogRead(SENSOR);
        Serial.print("snapshot=");
        Serial.println(lightValue);

    // 3. Мигаем желтым светодиодом 100 мс
        digitalWrite(YELLOW_LED_PIN, HIGH);
        delay(100);
        digitalWrite(YELLOW_LED_PIN, LOW);
    }
    
}
