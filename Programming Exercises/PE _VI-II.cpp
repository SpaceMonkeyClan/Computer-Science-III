// Programming Exercise 6.2 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


int alternating_sum(vector<int> a)
{
	int i, b, c;
	b = c = 0;
	for(i = 0; i < a.size();)
	{
		b = b + a[i];
		i = i + 2;
	}

	for(i = 1; i < a.size();)
	{
		c = c + a[i];
		i = i + 2;
	}

	int d = b - c;
	return d;
}
//________________________________________All Script________________________________________________


int main()
{
	vector<int> b;

	cout << "\nEnter the values, press 0 to stop user input..............\n\n ";
	
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

	cout << "\nAlternating sum of given vector is: " << alternating_sum(b);

	return 0;
}


