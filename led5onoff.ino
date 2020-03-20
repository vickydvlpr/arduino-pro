void setup() {
    for(int i=13; i>3; i--)
        pinMode(i, 0x1);
    pinMode(1, 0x0);
}
void loop() {
    if(digitalRead(1)) {
        for(int i=13; i>8; i--)
            digitalWrite(i, 1);
    } else {
        for(int i=8; i>3; i--)
            digitalWrite(i, 1);
    }
    delay(2000);
    for (int i=4; i<14; i++)
        digitalWrite(i, 0);
}