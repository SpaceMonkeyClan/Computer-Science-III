// Programming Exercise 6.1 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


double scalar_product(vector<int> a, vector<int> b)
{
	double c[100], sum = 0;
	for(int i = 0; i;)
	{
		c[i] = a[i] * b[i];
		sum = sum + c[i];
	}
	return sum;
}


//________________________________________All Script________________________________________________


int main()
{
	vector<int> a(3);
	vector<int> b(3);

	cout << "\nEnter the value of a and b for an array of 3 max-capacity: " << endl;
	for(int i = 0; i <= 2; i++)
	{
		cout << "\nEnter value for 'a': ";
		cin >> a[i];
		cout << "Enter value for 'b': ";
		cin >> b[i];
		cout << "\n" << endl;
	}


	int i = 3;
	while(1)
	{
		i -= 1;
		if(i <= 2 && i >= 0)
			cout << "a" << "[" << i << "]" << "=" << a[i] << "\n" << "b" << "[" << i << "]" << "=" << b[i] << endl;
		else
			break;
	}

	double c = scalar_product(a, b);

	cout << "\nScalar product of two vectors is: " << c << endl;

	return 0;
}

