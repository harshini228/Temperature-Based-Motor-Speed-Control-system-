#include <LiquidCrystal.h>

// LCD Pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int tempPin = A0;
const int motorPWM = 9;
const int IN1 = 7;
const int IN2 = 8;

float temperature;
int sensorValue;
int motorSpeed;

void setup() {
  lcd.begin(16, 2);

  pinMode(motorPWM, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(tempPin);

  // LM35 Temperature Calculation
  temperature = (sensorValue * 5.0 * 100.0) / 1024.0;

  // Motor Speed Control
  if (temperature < 25)
    motorSpeed = 0;
  else if (temperature < 30)
    motorSpeed = 100;
  else if (temperature < 35)
    motorSpeed = 180;
  else
    motorSpeed = 255;

  analogWrite(motorPWM, motorSpeed);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(temperature);
  lcd.print((char)223);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Speed:");
  lcd.print(map(motorSpeed, 0, 255, 0, 100));
  lcd.print("%");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C  Speed: ");
  Serial.print(map(motorSpeed, 0, 255, 0, 100));
  Serial.println("%");

  delay(1000);
}
