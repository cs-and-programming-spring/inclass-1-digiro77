


/************************************************
* Name: Carmen DiGironimo
* Email: digiro77@students.rowan.edu
*************************************************
* Purpose:
*  This program converts an inputted mile value 
*  to metric values, computes the circumference
*  of a circle, converts celsius to farenheit, 
*  calculates equivalent age values, and displays
*  my first initial.
*************************************************/

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
	cout << " ******************************************************************************************************************* " << endl;
	cout << " This program converts mile values to metric values and uses radius to compute the circumference of a circle" << endl;
	cout << " This program will also convert celsius temperatures to farenheit and computes equivalent age values based on years." << endl;
	cout << " Finally, it will display my first initial" << endl;
	cout << " ******************************************************************************************************************* \n\n";

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
	cout << "\n" << celsius << " degrees celsius is " << farenheit << " degrees farenheit.\n\n";

	//Get user input age in years
	cout << "Enter an age in years: ";
	cin >> ageYears;

	//Calculate user age in months, days, hours, minutes, and seconds
	ageMonths = ageYears * 12;
	ageDays = ageYears * 365.25;
	ageHours = ageYears * 365.25 * 24;
	ageMinutes = ageYears * 365.25 * 24 * 60;
	ageSeconds = ageYears * 365.25 * 24 * 60 * 60;

	//Display converted values of age
	cout << ageYears << " years old is equivalent to: \n\n";
	cout << ageMonths << " months.\n";
	cout << ageDays << " days.\n";
	cout << ageHours << " hours.\n";
	cout << ageMinutes << " minutes.\n";
	cout << ageSeconds << " seconds.\n\n";

	//Printing my initials (C and D)
	cout << "My first initial, C, is displayed below: \n";
	cout << "*****\n";
	cout << "*\n";
	cout << "*\n";
	cout << "*****\n";

	//End of program
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}