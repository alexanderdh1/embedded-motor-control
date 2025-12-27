// Skrevet af Alexander, Oliver og Phillip

#include <Arduino.h>
#include "motor.h"

#define MOTOR_PWM_PIN 10 // Speed control (must be a PWM pin)
#define MOTOR_DIR_PIN 12 // Direction control

// Initializes motor control pins
void Motor_Init()
{
  pinMode(MOTOR_PWM_PIN, OUTPUT);
  pinMode(MOTOR_DIR_PIN, OUTPUT);
}

// Moves forward
void moveForward(int speed)
{
  digitalWrite(MOTOR_DIR_PIN, HIGH);
  analogWrite(MOTOR_PWM_PIN, speed);
}

// Moves backward
void moveBackward(int speed)
{
  digitalWrite(MOTOR_DIR_PIN, LOW);
  analogWrite(MOTOR_PWM_PIN, speed);
}

// Stops the motor
void stopMotor()
{
  analogWrite(MOTOR_PWM_PIN, 0);
}