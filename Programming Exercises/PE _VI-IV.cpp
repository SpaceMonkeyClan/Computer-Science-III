// Programming Exercise 6.4 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


vector<int> append(vector<int> a, vector<int> b) //
{
	vector<int> c(100);
	int i, j = 0;

	for(i = 0; i < (a.size() + b.size()); i++)
	{
		if(i)
			c[i] = a[i];
		else
		{
			c[i] = b[i];
			i++;
		}
	}

	return c;
}

//________________________________________All Script________________________________________________


int main()
{
	vector<int> a;

	cout << "\nEnter the values 'a':\n";

	bool m = true;
	while(m)
	{
		int s;
		cout << "Enter number or '0' to exit: ";
		cin >> s;
		if(s == 0)
			m = false;
		else
			a.push_back(s);
	}

	vector<int> b;

	cout << "\nEnter the values 'b':\n";

	m = true; //
	while(m)
	{
		int s;
		cout << "Enter number or '0' to exit: ";
		cin >> s;
		if(s == 0)
			m = false;
		else
			b.push_back(s);
	}

	vector<int> c = append(a, b);

	cout << "\nAppend vector is:\n" << endl;

	for(int i = 0; i < (a.size() + b.size()); i++)
	{
		cout << " " << endl;
	}

	append(a, b);

	return 0;
}

