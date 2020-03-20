void setup() {
    for(int i=1; i<6; i++)
        pinMode(i, 0x1);
        pinMode(A0, 0x0); 
}
void loop() {
    int soundStatus = digitalRead(8);
    if(soundStatus) {
        for(int i=1; i<4; i++)
            digitalWrite(i, 1);
        digitalWrite(4, 0);
        digitalWrite(5, 0);
    } else {
        for(int i=1; i<6; i++)
            digitalWrite(i, 0);
    }
    delay(3000);
}