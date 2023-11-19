#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;
Servo myservo8;
Servo myservo9;

int sensorPin = A0;
int sensorPin_2 = A1;
int sensorPin_3 = A2;
int sensorPin_4 = A3;
int sensorPin_5 = A4;
int sensorPin_6 = A5;
int sensorPin_7 = A6;
int sensorPin_8 = A7;
int sensorPin_9 = A8;

int value = 0;
int value_2 = 0;
int value_3 = 0;
int value_4 = 0;
int value_5 = 0;
int value_6 = 0;
int value_7 = 0;
int value_8 = 0;
int value_9 = 0;

const int PIN_RED  = 2;
const int PIN_RED_2  = 3;
const int PIN_RED_3 = 4;
const int PIN_GREEN = 5;
const int PIN_GREEN_2 = 6;
const int PIN_GREEN_3 = 7;
const int PIN_BLUE = 8;
const int PIN_BLUE_2  = 9;
const int PIN_BLUE_3  = 10;

int rgb_val = 0;
int rgb_val_2 = 0;
int rgb_val_3 = 0;
int rgb_val_4 = 0;
int rgb_val_5 = 0;
int rgb_val_6 = 0;
int rgb_val_7= 0;
int rgb_val_8 = 0;
int rgb_val_9 = 0;

int servo_val = 0;
int servo_val_2 = 0;
int servo_val_3 = 0;
int servo_val_4 = 0;
int servo_val_5 = 0;
int servo_val_6 = 0;
int servo_val_7 = 0;
int servo_val_8 = 0;
int servo_val_9 = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
  pinMode(PIN_RED_2,   OUTPUT);
  pinMode(PIN_GREEN_2, OUTPUT);
  pinMode(PIN_BLUE_2,  OUTPUT);
  pinMode(PIN_RED_3,   OUTPUT);
  pinMode(PIN_GREEN_3, OUTPUT);
  pinMode(PIN_BLUE_3,  OUTPUT);
  
  myservo.attach(22);
  myservo2.attach(24);
  myservo3.attach(26);
  myservo4.attach(28);
  myservo5.attach(30);
  myservo6.attach(32);
  myservo7.attach(34);
  myservo8.attach(36);
  myservo9.attach(38);
} 
void loop() {
  value = analogRead(sensorPin);
  value_2 = analogRead(sensorPin_2);
  value_3 = analogRead(sensorPin_3);
  value_4 = analogRead(sensorPin_4);
  value_5 = analogRead(sensorPin_5);
  value_6 = analogRead(sensorPin_6);
  value_7 = analogRead(sensorPin_7);
  value_8 = analogRead(sensorPin_8);
  value_9 = analogRead(sensorPin_9);
	
  Serial.println(value_4);
  
  rgb_val = map(value, 230, 800, 0, 255);
  rgb_val_2 = map(value_2, 230, 800, 0, 255);
  rgb_val_3 = map(value_3, 230, 800, 0, 255);
  rgb_val_4 = map(value_4, 230, 800, 0, 255);
  rgb_val_5 = map(value_5, 230, 800, 0, 255);
  rgb_val_6 = map(value_6, 230, 800, 0, 255);
  rgb_val_7 = map(value_7, 230, 800, 0, 255);
  rgb_val_8 = map(value_8, 230, 800, 0, 255);
  rgb_val_9 = map(value_9, 230, 800, 0, 255);
  
  servo_val = map(value, 230, 800, 93, 160);
  servo_val_2 = map(value_2, 230, 800, 93, 160);
  servo_val_3 = map(value_3, 230, 800, 93, 160);
  servo_val_4 = map(value_4, 230, 800, 93, 160);
  servo_val_5 = map(value_5, 230, 800, 93, 160);
  servo_val_6 = map(value_6, 230, 800, 93, 160);
  servo_val_7 = map(value_7, 230, 800, 93, 160);
  servo_val_8 = map(value_8, 230, 800, 93, 160);
  servo_val_9 = map(value_9, 230, 800, 93, 160);
 
  tone(23, value, 10);
  delay(10);
  tone(25, value_2, 10);
  delay(10);
  tone(27, value_3, 10);
  delay(10);
  tone(29, value_4, 10);
  delay(10);
  tone(31, value_5, 10);
  delay(10);
  tone(33, value_6, 10);
  delay(10);
  tone(35, value_7, 10);
  delay(10);
  tone(37, value_8, 10);
  delay(10);
  tone(39, value_9, 10);
  delay(10);
  
  analogWrite(PIN_RED, rgb_val);
  analogWrite(PIN_GREEN, rgb_val_2);
  analogWrite(PIN_BLUE, rgb_val_3);
  analogWrite(PIN_RED_2, rgb_val_4);
  analogWrite(PIN_GREEN_2, rgb_val_5);
  analogWrite(PIN_BLUE_2, rgb_val_6);
  analogWrite(PIN_RED_3, rgb_val_7);
  analogWrite(PIN_GREEN_3, rgb_val_8);
  analogWrite(PIN_BLUE_3, rgb_val_9);

  myservo.write(servo_val);
  myservo2.write(servo_val_2);
  myservo3.write(servo_val_3);
  myservo4.write(servo_val_4);
  myservo5.write(servo_val_5);
  myservo6.write(servo_val_6);
  myservo7.write(servo_val_7);
  myservo8.write(servo_val_8);
  myservo9.write(servo_val_9);

  delay(10);
}
