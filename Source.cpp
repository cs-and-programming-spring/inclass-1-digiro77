


/***********************************************
* Name: Carmen DiGironimo
* Email: digiro77@students.rowan.edu
***********************************************
* Purpose:
*  This program converts an inputted mile value to a kilometers, computes the circumference of a circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	//Declare in-class variables
	float radius, circumference, miles, kilometers, meters, centimeters, millimeters;

	//Declare homework variables
	float farenheit, celsius, ageYears, ageMonths, ageDays, ageHours, ageMinutes, ageSeconds;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes converts mile values to metric values and uses radius to compute circumference of a circle" << endl;
	cout << " This program will also convert farenheit temperatures to celsius, computes equivalent age values based on years, and displays my initials" << endl;
	cout << " ******************************************\n\n";

	//Get user input for miles
	cout << "Convert miles to metric measurements: \n";
	cout << "Please input miles: ";
	cin >> miles;

	//Compute conversion in kilometers, meters, centimeters, and millimeters
	kilometers = miles * 1.6;
	meters = miles * 1609.3;
	centimeters = miles * 160934;
	millimeters = miles * 1609344;

	//Display kilometer, meter, centimeter, and millimeter conversions
	cout << "\n" << miles << " miles is equal to: \n\n";
	cout << kilometers << " kilometers.\n";
	cout << meters << " meters.\n";
	cout << centimeters << " centimeters.\n";
	cout << millimeters << " millimeters.\n";

	//Get user input for radius
	cout << "\n" << "Find the circumference of a circle: \n";
	cout << "Please input a radius: ";
	cin >> radius;

	//Compute circumference with 2*PI*radius
	circumference = 2 * PI * radius;

	//Display the circumference 
	cout << "The circumference of a circle with radius " << radius << " is " << circumference << ".\n\n";

	//Get user input for temperature in celsius
	cout << "Enter a temperature in celsius: ";
	cin >> celsius;

	//Compute temperature in farenheit
	farenheit = ((9 * celsius) / 5) + 32;

	//Display converted values
	cout << "\n" << farenheit << " degrees farenheit is " << celsius << " degrees celsius.\n\n";

	//
	
	//End of program
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}