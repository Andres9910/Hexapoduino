#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3; 

void setup()
{
 servo1.attach(3);
 servo2.attach(4);
 servo3.attach(5);
}

void loop()
{
 servo1.write(45);
 servo2.write(45);
 servo3.write(45);
 delay(2000);
 servo1.write(90);
 servo2.write(90);
 servo3.write(90);
 delay(2000);
 servo1.write(135);
 servo2.write(135);
 servo3.write(135);
 delay(2000);
}
