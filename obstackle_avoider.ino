void setup() {
    for(int i=9; i<14; i++)
        pinMode(i, 0x1);
    pinMode(5, 0x0);
    pinMode(6, 0x0);
}
void loop() {
    int leftSensor = digitalRead(5);
    int rightSensor = digitalRead(6);

    if(leftSensor && rightSensor) {
        digitalWrite(12, 0);
        digitalWrite(11, 0);
        digitalWrite(10, 0);
        digitalWrite(9, 0);
        // LED
        digitalWrite(13, 0);
        // delay
        delay(100);
    }
    else if(!(leftSensor && rightSensor)) {
        digitalWrite(12, 0);
        digitalWrite(11, 1);
        digitalWrite(10, 0);
        digitalWrite(9, 1);
        // LED
        digitalWrite(13, 1);
        // delay
        delay(100);
    }
    if(leftSensor) {
        digitalWrite(12, 0);
        digitalWrite(11, 1);
        digitalWrite(10, 0);
        digitalWrite(9, 0);
        // LED
        digitalWrite(13, 1);
        // delay
        delay(100);
    }
    if(rightSensor) {
        digitalWrite(12, 0);
        digitalWrite(11, 0);
        digitalWrite(10, 0);
        digitalWrite(9, 1);
        // LED
        digitalWrite(13, 1);
        // delay
        delay(100);
    }
    digitalWrite(12, 1);
    digitalWrite(11, 0);
    digitalWrite(10, 1);
    digitalWrite(9, 0);
    delay(100);

}