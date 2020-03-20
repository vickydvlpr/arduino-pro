void setup()
{
    for(int i = 1; i < 6; i++)
    {
        pinMode(i,0x1);
        pinMode(6,1);
        pinMode(A0,0);
    }
}
    void loop()
    {
        int ldr=analogRead(A0);
        if(ldr>=400){
            digitalWrite(1,HIGH);
            digitalWrite(2,LOW);
            digitalWrite(3,HIGH);
            digitalWrite(4,LOW);
            digitalWrite(5,LOW);
        }else {
            analogWrite(1,LOW);
            analogWrite(2,LOW);
            analogWrite(3,LOW);
            analogWrite(4,LOW);
            digitalWrite(5,HIGH);
        }
        delay(2000);
    }
    
}