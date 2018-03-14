#include"Car.h"
#include<iostream>

Car::Car(int speed = 0, int feul = 0, char * name = "My_Car")
{
	this->feul = feul;
	this->name = name;
	this->speed = speed;
}
void Car::break_() {
	this->feul -= 5;
	this->speed -= 20;
}
void Car::accel() {
	this->feul -= 2;
	this->speed += 10;
}
