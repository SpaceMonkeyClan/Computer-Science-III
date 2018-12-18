// Programming Exercise 6.3 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


void reverse(vector<int> a)
{
	vector<int> b;
	for(int i = a.size() - 1; i >= 0; i--)
	{
		b.push_back(a[i]);
	}

	cout << "\nReverse order: ";

	for(int i = 0; i < b.size(); i++)
	{
		cout << " " << b[i];
	}
}


//________________________________________All Script________________________________________________


int main()
{
	
	vector<int> b;

	cout << "\nEnter the values.............\n";

	bool m = true;
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

	reverse (b);

	return 0;
}

