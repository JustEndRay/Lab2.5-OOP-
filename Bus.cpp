#include "Bus.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

int  Bus::GetNumber_of_passenger_seats() const { return Number_of_passenger_seats; }
void Bus::SetNumber_of_passenger_seats(int  value) { Number_of_passenger_seats = value; }

void Bus::Re_assignment_Number_of_passenger_seats()
{
	int n;
	cout << "re-enter Number_of_passenger_seats" << endl;
	cin >> n;
	Number_of_passenger_seats = n;
}
void  Bus::Change_Number_of_passenger_seats()
{
	cout << "Change_Number_of_passenger_seats" << endl;
	cin >> Number_of_passenger_seats;
}
void  Car::Re_assignment_Brand()
{
	string n;
	cout << "re-enter Brand" << endl;
	cin >> n;
	Brand = n;
}
void  Car::Change_Brand()
{
	cout << "change Brand" << endl;
	cin >> Brand;
}
ostream& operator << (ostream& out, const Bus& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Bus& A)
{
	cout << "Enter a Number of passenger seats "; in >> A.Number_of_passenger_seats;
	return in;
}
Bus::operator string() const
{
	stringstream ss;
	ss << "Number of passenger seats= " << Number_of_passenger_seats << endl;
	return ss.str();
}