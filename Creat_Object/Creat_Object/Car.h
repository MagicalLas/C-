#pragma once

#include<string.h>
class Car
{
public:
	Car(int speed, int feul, char* name);
	~Car();
	int get_speed() { return this->speed; };
	int get_feul() { return this->feul; };
	char* get_name() { return this->name; };
	void break_();
	void accel();
private:
	int speed;
	int feul;
	char* name;
};