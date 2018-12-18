// Programming Exercise 4.7 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/29/17


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// ____________________________________________MISC....__________________________
// ____________________________________________FUNCTIONS_________________________

double sphere_volume(double r)
{
	double volume = (1.333333) * 3.14159 * pow(r, 3);
	return volume;
}


double sphere_surface(double r)
{
	double surfaceArea = 4 * 3.14159 * pow(r, 2);
	return surfaceArea;
}


double cylinder_volume(double r, double h)
{
	double volume = 3.14159 * pow(r, 2) * h;
	return volume;
}


double cylinder_surface(double r, double h)
{
	double surfaceArea = (2 * 3.14159 * r * h) + (2 * 3.14159 * pow(r, 2));
	return surfaceArea;
}


double cone_volume(double r, double h)
{
	double volume = 3.14159 * pow(r, 2) * (h/3);
	return volume;
}


double cone_surface(double r, double h)
{
	double surfaceArea = 3.14159 * r * (r + sqrt(pow(h, 2) + pow(r, 2)));
	return surfaceArea;
}


void MainII()
{
	cout << "\n\n\t\t\tWelcome to the MAIN CONSOLE!\n\n" << endl;
	cout << "\n Please Enter a a radius: ";
    int r;
    cin >> r;
    while (!cin)
    {
        cout << "ERROR! Please only enter a integer. >:|" << "\n" << endl;
        cout << "Enters a radius: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> r;
    }
    cout << "Awesome! You've selected " << r << " as your radius.\n" << endl;

    cout << "\n Please Enter a height: ";
    int h;
    cin >> h;
    while (!cin)
    {
        cout << "ERROR! Please only enter a integer. >:|" << "\n" << endl;
        cout << "Enters a integer: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> h;
    }
    cout << "Nice! You've selected " << h << " as your height.\n" << endl;

    cout << "We may now begin. So lets......\n" << endl;
    cout << "LOADING compution...............\n" << endl;
    cout << "Compution compleate!\n" << endl;

    double vOs, aOs, vOc, aOc, vOco, aOco;
    vOs = sphere_volume(r);
    aOs = sphere_surface(r);
    vOc = cylinder_volume(r, h);
    aOc = cylinder_surface(r, h);
    vOco = cone_volume(r, h);
    aOco  = cone_surface(r, h);

    cout << fixed << setprecision(2);
    cout << " +---------------------------------------------+" << endl;
    cout << " | Chart:                                      |" << endl;
    cout << " +---------------------------------------------+" << endl;
    cout << " +---------------------------------------------+" << endl;
    cout << " | Volume of sphere         | " << setw(13) << vOs << "    |" << endl;
    cout << " |---------------------------------------------|" << endl;
    cout << " | surface area of sphere   | " << setw(13) << aOs << "    |" << endl;
    cout << " +---------------------------------------------+" << endl;
    cout << " +---------------------------------------------+" << endl;
    cout << " | Volume of cylinder       | " << setw(13) << vOc << "    |" << endl;
    cout << " |---------------------------------------------|" << endl;
    cout << " | surface area of cylinder | " << setw(13) << aOc << "    |" << endl;
    cout << " +---------------------------------------------+" << endl;
    cout << " +---------------------------------------------+" << endl;
    cout << " | Volume of cone           | " << setw(13) << vOco << "    |" << endl;
    cout << " |---------------------------------------------|" << endl;
    cout << " | surface area of cone     | " << setw(13) << aOco << "    |" << endl;
    cout << " +---------------------------------------------+" << endl;

}


// ____________________________________________STRICKLY SCRIPT______________________
int main()
{
	cout << "\n\n\t\t\tWelcome to the \"Radius Conversion Calculator!\"\n\n" << endl;
	cout << "In this script, we will output the volume and surface area of a sphere, cylinder, \
and a cone using the standolone radius and height of which you will be prompted to input.\n" << endl;
	cout << "Let's get started. You will no be taken to the MAIN CONSOLE.\n" << endl;
	cout << "LOADING...............\n\n" << endl;
	MainII();



	return 0;
}
