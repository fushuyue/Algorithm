// Illustration of Mutual Recursion
// Written by Prof. Sreenivas for IE523: Financial Computation
#include <iostream>
#include <cmath>
#include <iomanip>

const double EPSILON = 0.0001;

using namespace std;

double my_cos(double theta);
double my_sin(double theta);

double my_sin(double theta)
{
	if (abs(theta) < EPSILON) 
		return (theta - ((theta*theta*theta)/6));
	else 
		return (2*my_sin(theta/2)*my_cos(theta/2));
}
	
double my_cos(double theta)
{
	if (abs(theta) < EPSILON) 
		return (1 - ((theta*theta)/2));
	else 
		return (pow(my_cos(theta/2),2) - pow(my_sin(theta/2),2));
}

int main (int argc, char * const argv[]) 
{
    double angle;
	cout << setprecision(10);
	cout << "Angle (Radians)? ";
	cin >> angle;
	cout << "   Sin(" << angle << ") = " << sin(angle) << "\t   Cos(" << angle << ") = " << cos(angle) << endl;
	cout << "My_Sin(" << angle << ") = " << my_sin(angle) << "\tMy_Cos(" << angle << ") = " << my_cos(angle) << endl;
	
    return 0;
}
