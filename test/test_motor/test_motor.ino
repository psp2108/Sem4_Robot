#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

char bt='S';
void setup()
{
  Serial.begin(9600);
 
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  Stop();
}
void loop() {
  // put your main code here, to run repeatedly:
  
  bt=Serial.read();

  switch(bt){
    case '1':
      motor1.run(FORWARD);
      delay(3000);
      motor1.run(RELEASE);
      delay(1000);
      motor1.run(BACKWARD);
      delay(3000);
      motor1.run(RELEASE);
      
      break;
    case '2':
      motor2.run(FORWARD);
      delay(3000);
      motor2.run(RELEASE);
      delay(1000);
      motor2.run(BACKWARD);
      delay(3000);
      motor2.run(RELEASE);
      
      break;
    case '3':
      motor3.run(FORWARD);
      delay(3000);
      motor3.run(RELEASE);
      delay(1000);
      motor3.run(BACKWARD);
      delay(3000);
      motor3.run(RELEASE);
      
      break;
    case '4':
      motor4.run(FORWARD);
      delay(3000);
      motor4.run(RELEASE);
      delay(1000);
      motor4.run(BACKWARD);
      delay(3000);
      motor4.run(RELEASE);
      
      break;
    case '0':
      Stop();
      break;
  }
}

void Stop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
