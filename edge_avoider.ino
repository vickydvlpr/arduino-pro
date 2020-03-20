int sensor_ir_left = 2, sensor_ir_right = 3;
int motor_left_forward = 5, motor_left_backward = 6, motor_right_forward = 7, motor_right_background = 8;
int led_indicator = 9;

void setup() {
    for(int i=5; i<10; i++)
        pinMode(i, 0x1);
    pinMode(sensor_ir_left, 0x0);
    pinMode(sensor_ir_right, 0x0);
}

void loop() {

    if(digitalRead(sensor_ir_left) && digitalRead(sensor_ir_right)) {
        for(int i=5; i<10; i++)
            digitalWrite(i, 0);
    } else if(digitalRead(sensor_ir_left) || digitalRead(sensor_ir_right)) {

    }
}