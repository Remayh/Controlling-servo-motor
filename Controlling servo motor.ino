#include <Servo.h>
int servosignal=13;
int servosignal1=12;
int servosignal2=11;
int servosignal3=10;
int servosignal4=9;
Servo myservo;
Servo my1servo1;
Servo my2servo2;
Servo my3servo3;
Servo my4servo4;
void setup()
{
  myservo.attach(servosignal);
   my1servo1.attach(servosignal1);
  my2servo2.attach(servosignal2);
  my3servo3.attach(servosignal3);
  my4servo4.attach(servosignal4);
}
void loop()
{
  myservo.write(90);
  delay(1000);
  myservo.write(90);
   my1servo1.write(90);
  delay(1000);
  my1servo1.write(90);
  my2servo2.write(90);
  delay(1000);
  my2servo2.write(90);
  my3servo3.write(90);
  delay(1000);
  my3servo3.write(90);
  my4servo4.write(90);
  delay(1000);
  my4servo4.write(90);
}