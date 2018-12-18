// Programming Exercise 5.8 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/7/17

//________________________________________Misc._____________________________________________________

#include <iostream>
using namespace std;

//________________________________________Functions_________________________________________________
class Car
{
public:
	Car(double d);
	void add_gas(double fuel);
	void drive(double dist);
	double get_gas() const;
private:
	double fuel_efficiency;
	double fuel_level;
};

Car::Car(double d)
{
	fuel_efficiency = d;
	fuel_level = 0.0;
}

void Car::add_gas(double fuel)
{
	fuel_level += fuel;
}

void Car::drive(double dist)
{
	fuel_level = dist / fuel_efficiency;
}

double Car::get_gas() const
{
	return fuel_level;
}

int main()
{
	Car my_beemer(29);
	my_beemer.add_gas(20);
	my_beemer.drive(100);
	cout << my_beemer.get_gas() << "\n";
	return 0;
}
