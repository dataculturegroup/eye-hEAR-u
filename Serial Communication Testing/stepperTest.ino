/*Example sketch to control a stepper motor with A4988 stepper motor driver, AccelStepper library and Arduino: continuous rotation. More info: https://www.makerguides.com */

// Include the AccelStepper library:
#include <AccelStepper.h>

// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver:
#define dirPin 4
#define stepPin 3
#define motorInterfaceType 1

// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);

void setup()
{
    Serial.begin(9600);
    // Set the maximum speed in steps per second:
    stepper.setMaxSpeed(5000);
    stepper.setSpeed(5000);
    stepper.setAcceleration(12000);
}

void loop()
{
    String read = Serial.readStringUntil('\n');
    Serial.println("read:" + read);

    // // Set the speed in steps per second:
    // stepper.setSpeed(2000);
    // // Step the motor with a constant speed as set by setSpeed():
    // stepper.runSpeed();
}