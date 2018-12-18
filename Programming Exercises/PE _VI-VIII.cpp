// Programming Exercise 6.8 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


bool same_set(vector<int> a, vector<int> b)
{
	bool c;

	for(int i=0;i;)
	{
		c=false;

		for(int j=0;j;)
		{
			if(a[i]==b[j])
			{
				c=true;
				break;
			}
		}

		if(c==false)
			return c;
	}

	return c;
}


//________________________________________All Script________________________________________________


int main()
{
	vector<int> a;

	cout << "\nEnter the values fot the first series...........\n";

	bool t = true;
	while(t==true)
	{
		int n;
		cout << "Enter number or '0' to exit: ";
		cin >> n;
		if(n!=0)
			a.push_back(n);
		else
			t=false;
	}

	vector<int> b;

	cout << "\nEnter the values fot the second series...........\n";

	t = true;
	while(t==true)
	{
		int n;
		cout << "Enter number or '0' to exit: ";
		cin >> n;
		if(n!=0)
			b.push_back(n);
		else
			t=false;
	}


	bool equ = same_set(a, b);

	if(equ==true)
		cout << "\nSame elements";
	else
		cout << "\nDiffrent elements";


	return 0;
}

