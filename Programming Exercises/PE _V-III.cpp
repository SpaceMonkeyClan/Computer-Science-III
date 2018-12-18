// Programming Exercise 5.7 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/7/17

//________________________________________Misc._____________________________________________________

#include <iostream>
using namespace std;

//________________________________________Functions_________________________________________________

class Address
{
public:
	Address(int apt_no);
	Address();
	void print();
	void comes_before(Address obj1, Address obj2);
private:
	char street[20];
	char city[20];
	char state[20];
	int apartment_number;
	char houseno[10];
	int postal_code;

};

Address::Address(int apt_no)
{
	cout << "\nEnter house number: ";
	cin >> houseno;
	cout << "\nEnter street address: ";
	cin >> street;
	apartment_number = apt_no;
	cout << "\nEnter the city: ";
	cin >> city;
	cout << "\nEnter the state: ";
	cin >> state;
	cout << "\nEnter the postal code: ";
	cin >> postal_code;
}

Address::Address()
{
	cout << "\nEnter house number: ";
	cin >> houseno;
	cout << "\nEnter house address: ";
	cin >> street;
	cout << "\nEnter the city: ";
	cin >> city;
	cout << "\nEnter the state: ";
	cin >> state;
	cout << "\nEnter the postal code: ";
	cin >> postal_code;
	apartment_number = 0;
}

void Address::print()
{
	cout << "House number: " << houseno << " " << "street: " << street << "" << endl;
	cout << "City: " << city << "" << "State: " << state << "" << "Postal code: " << postal_code << "" << endl;
	if (apartment_number != 0)
		cout << "Apartment number: " << apartment_number << "" << endl;
}

void Address::comes_before(Address obj1, Address obj2)
{
	if (obj1.postal_code < obj2.postal_code)
	{
		cout << "\nAddress" << obj1.postal_code << "comes before" << "Address" << obj2.postal_code << "\n" << endl;
	}
	else
	{
		cout << "\nAddress" << obj2.postal_code << "comes before" << "Address" << obj1.postal_code << "\n" << endl;
	}
};

//________________________________________All Script_______________________________________________


int main()
{
	int a, b;
	char app;
	cout << "Do you want to enter apartment number?(y/n): ";
	cin >> app;
	if (app == 'y' or app == 'Y')
	{
		cout << "\nEnter apartment number: ";
		cin >> a;
		cout << "\nEnter address of first house: ";
		Address obj1(a);
		obj1.print();
		cout << "\nEnter address of second house: ";
		cin >> b;
		Address obj2(b);
		obj2.print();
		obj1.comes_before(obj1, obj2);
	}
	else
	{
		cout << "Wrong choice, try again.";
		main();
	}
	system("pause");
}
