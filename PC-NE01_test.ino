/*
  Title     : [VOL-27]PC-NE01 sample code
  Copyright : Copyright (c) 2023 Crane-elec. Co., LTD.
  URL       : https://crane-elec.co.jp/products/vol-27/
  License   : Released under the MIT license
*/
#include <arduino.h>

void setup(){
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
    pinMode(A4, OUTPUT);
    pinMode(A5, OUTPUT);
    #if defined(__AVR_ATmega4809__)
    pinMode(A6, OUTPUT);
    pinMode(A7, OUTPUT);
    #endif

}

void loop() {
    uint8_t i,j;

    for(i=0;i<14;i++)
    {
        for(j=0;j<14;j++)
        {
            digitalWrite(j, LOW);
        }
        digitalWrite(i, HIGH);
        delay(1000);
        digitalWrite(i, LOW);
        delay(100);
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            digitalWrite(14+j, LOW);
        }
        digitalWrite(14+i, HIGH);
        delay(1000);
        digitalWrite(14+i, LOW);
        delay(100);
    }

    #if defined(__AVR_ATmega4809__)
    digitalWrite(A6, HIGH);
    delay(1000);
    digitalWrite(A6, LOW);
    delay(100);
    digitalWrite(A7, HIGH);
    delay(1000);
    digitalWrite(A7, LOW);
    delay(100);
    #endif

}
