#include <Arduino.h>
#include <IRremote.hpp>

const byte IR_RECEIVE_PIN = 6;

void setup()
{
    //IR Remote Part
    Serial.begin(115200);
    Serial.println("Enabling IRin...");
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
    Serial.println("Enabled IRin");

    //Relay Part
    pinMode(7, OUTPUT);
    digitalWrite(7, HIGH);
}

void loop()
{
    if(IrReceiver.decode())
    {
        Serial.println(IrReceiver.decodedIRData.command);
        digitalWrite(7, !digitalRead(7));
        delay(1000);
        IrReceiver.resume();
    }
    delay(100);
}
