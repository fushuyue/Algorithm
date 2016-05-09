//  Karatsuba Multiplication 

#include <iostream>
#include <cmath>
using namespace std;

// This recursive routine tells you the number of digits in the integer n
int find_the_number_of_digits(int n, int & digits) 
{
	if (n < 10)
		return (digits+1); //the value of digits will be zero here
	else {
		digits++;
		return (find_the_number_of_digits(n/10, digits));
	}
}

// This routine gives you the least significant digits of number
// That is, if the_no_of_least_significant_digits = 3 and number = 12345
// then this routine will return 345
int get_least_significant_digits(int the_no_of_least_significant_digits, int & number)
{
	return (number % ((int) pow(10.0, ((double) the_no_of_least_significant_digits))));
}

// This routine gives you the most significant digits of number
// That is, if the_no_of_most_significant_digits = 3 and number = 12345
// then this routine will return 12
int get_most_significant_digits(int the_no_of_most_significant_digits, int & number)
{
	return (number/((int) pow(10.0, ((double) the_no_of_most_significant_digits))));
}

// This recursive routine implements the Karatsuba multiplication algorithm
// It is written to work for any x and y -- that is, I am not requiring they
// have the same number of digits.  The theory follows directly from what I 
// have in my notes. 
int karatsuba_multiplication(int &x, int &y) 
{ 
	// I need this to compute the #digits in x and y... some idiosynchratic
	// stuff for the way how the routine is written
	int d1 = 0;
	int d2 = 0;
	
	// stopping condition/case for the recursion... I am choosing to stop
	// the recursion if any one of the two numbers to be multiplied is a
	// single digit number... you can choose some other condition if you wish
	int max_digits_in_x_and_y = max(find_the_number_of_digits(x, d1),
									find_the_number_of_digits(y, d2));
	
	if (max_digits_in_x_and_y <= 1)
		return (x*y);
	else {
		// split the numbers x and y into "most-significant" and "least-significant"
		// parts -- x = [x1 x2] and y = [y1 y2]; assume x has more digits than y for
		// right now.  We want to split x into two (almost) equal parts x1 and x2.
		// After this, we want to chop y in such a way that y2 has the same number of
		// digits as x2, and what ever remains stays in y1 (i.e. we do not split y
		// into near-equal parts).   
		int no_of_digits_in_x2_and_y2 = (max_digits_in_x_and_y/2) + (max_digits_in_x_and_y%2);
		int x1 = get_most_significant_digits(no_of_digits_in_x2_and_y2, x);
		int x2 = get_least_significant_digits(no_of_digits_in_x2_and_y2, x);
		int y1 = get_most_significant_digits(no_of_digits_in_x2_and_y2, y);
		int y2 = get_least_significant_digits(no_of_digits_in_x2_and_y2, y);
		
		// we need these for the middle-term in section 3.1 of lesson 2 of my notes.
		int z1 = x2-x1;
		int z2 = y1-y2;
		
		// procedure in section 3.1 of my notes
		int a = karatsuba_multiplication(x1, y1);
		int	b = karatsuba_multiplication(z1, z2);
		int c = karatsuba_multiplication(x2, y2);
		return ((pow(10.0, 2*no_of_digits_in_x2_and_y2)*a) + 
				(pow(10.0, no_of_digits_in_x2_and_y2)*(b+a+c)) + 
				c);
	}
}			

int main () 
{ 
	int x, y; 
	cout << "Integer x: ";
	cin >> x;
	cout << "Integer y: ";
	cin >> y;

	cout << "(Karatsuba) " << x << " x " << y << " = " << karatsuba_multiplication(x,y) << endl;
	cout << "(Regular)   " << x << " x " << y << " = " << x*y << endl;

} 



