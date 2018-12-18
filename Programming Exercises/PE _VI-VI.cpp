// Programming Exercise 6.6 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


vector<int> merge_sorted(vector<int> a, vector<int> b)
{
	vector<int> c(100);

	int i, j, k, m, n, temp;
	m = a.size();
	n = b.size();

	for(i = 0; i<m-1; i++)
	{
		if(a[i]>a[i+1])
		{
			cout << "\nVector 'a' is not sorted. Please enter sorted elements";
			exit(1);
		}
	}

	for(i=0; i<n-1; i++)
	{
		if(b[i]>b[i+1])
		{
			cout << "\nVector 'b' is not sorted. Please enter sorted elements";
			exit(1);
		}
	}

	j=k=0;

	for(i=0; i<(b.size()+a.size())-1; i++)
	{
		if(a[j]<b[k])
		{
			c[i]=a[j];
			j=j+1;
		}
		else
		{
			c[i]=b[k];
			k=k+1;
		}
	}

	if(j<a.size())
	{
		c[i] =[j];
	}

	if(k<b.size())
	{
		c[i]=b[k];
	}

	return c;
}
//________________________________________All Script________________________________________________


int main()
{
	vector<int> a;
	
	cout << "\nEnter the values 'a'...........\n";

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

	cout << "\nEnter the values 'b'..............\n";

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


	vector<int> result = merge_sorted(a, b);

	cout << "\nMerge sorted vector is: ";

	for(int i = 0; i <(a.size()+b.size()); i++)
	{
		cout << " " << endl;
	}

	return 0;
}

