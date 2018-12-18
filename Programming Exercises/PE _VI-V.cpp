// Programming Exercise 6.5 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


vector<int> merge(vector<int> a, vector<int> b)
{
	vector<int> c(100);
	int i, j = 0, n, m, k = 0;
	n = a.size();
	m = b.size();

	for(i = 0, i < (b.size() + a.size());)
	{
		if(n != 0)
		{
			c[i] = a[k];
			n--;
			k++;
			i = i + 1;
		}

		if(m != 0)
		{
			c[i] = b[j];
			m--;
			j++;
			i = i + 1;
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

	vector<int> result = merge(a, b);

	cout << "\nMerge vector is: ";

	for(int i = 0; i < (a.size() + b.size()); i++)
	{
		cout << " " << endl;
	}

	return 0;
}

