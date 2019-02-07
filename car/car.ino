#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

char bt='S';
void setup()
{
  Serial.begin(9600);

  pinMode(14,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
 
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  Stop();
}


void loop() {
  bt=Serial.read();

  switch(bt){
    case 'F':
      forward(); 
      break;
    case 'B':
      backward(); 
      break;
    case 'L':
      left(); 
      break;
    case 'R':
      right(); 
      break;
    case 'S':
      Stop(); 
      break;
    case '1':
      digitalWrite(14,1);
      delay(700);
      digitalWrite(14,0);
      break;
    case '2':
      digitalWrite(15,1);
      delay(700);
      digitalWrite(15,0);    
      break;
    case '3':
      digitalWrite(16,1);
      delay(700);
      digitalWrite(16,0);
      break;
    case '4':
      digitalWrite(17,1);
      delay(700);
      digitalWrite(17,0);
      break;
    case '5':
      digitalWrite(18,1);
      delay(700);
      digitalWrite(18,0);
      break;
    case '6':
      digitalWrite(19,1);
      delay(700);
      digitalWrite(19,0);
      break;
    case 'a':
      pattern1();
      break;
  }
}

void pattern1() {
  digitalWrite(14,1);
  digitalWrite(18,1);
  delay(1000);
  digitalWrite(14,0);
  digitalWrite(18,0);
  digitalWrite(16,1);
  delay(1000);
  digitalWrite(16,0);
  digitalWrite(15,1);
  digitalWrite(17,1);
  delay(1000);
  digitalWrite(15,0);
  digitalWrite(17,0);
  
}

void forward() {
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

void backward() {
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void left() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);
}

void right() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD);
}

void Stop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}











