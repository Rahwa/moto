#include "motorcontrol.h"

unsigned char leftMotor;
unsigned char rightMotor;
unsigned char frontMotor;
unsigned char rearMotor;
unsigned char leftPulse = 0;
unsigned char rightPulse = 0;
unsigned char frontPulse = 0;
unsigned char rearPulse = 0;

void startMotors() {
    leftPulse = 62;
    rightPulse = 62;
    frontPulse = 62;
    rearPulse = 62;
    analogWrite(lefMotor, leftPulse);
    analogWrite(rightMotor, rightPulse);
    analogWrite(frontMotor, frontPulse);
    analogWrite(rearMotor, rearPulse);
}

void stopMotors() {
    leftPulse = 0;
    rightPulse = 0;
    frontPulse = 0;
    rearPulse = 0;
    analogWrite(lefMotor, leftPulse);
    analogWrite(rightMotor, rightPulse);
    analogWrite(frontMotor, frontPulse);
    analogWrite(rearMotor, rearPulse);
}

unsigned char increaseMotorPulse(unsigned char motor, unsigned char pulse) {
    if(pulse < 252) {
        pulse = pulse + 3;
        analogWrite(motor, pulse);
        return pulse;
    }
    return 255;
}

unsigned char increaseMotorPulseX2(unsigned char motor, unsigned char pulse) {
    if(pulse < 249) {
        pulse = pulse + 6;
        analogWrite(motor, pulse);
        return pulse;
    }
    return 255;
}

unsigned char decreaseMotorPulse(unsigned char motor, unsigned char pulse) {
    if(pulse > 3) {
        pulse = pulse - 3;
        analogWrite(motor, pulse);
        return pulse;
    }	
    return 3;
}

unsigned char decreaseMotorPulseX2(unsigned char motor, unsigned char pulse) {
    if(pulse > 6) {
        pulse = pulse - 6;
        analogWrite(motor, pulse);
        return pulse;
    }	
    return 3;
}
		
