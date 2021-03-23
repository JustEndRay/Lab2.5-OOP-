#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

void Car::SetBrand(string value) { Brand = value; }
void Car::SetNumber_of_cylinders(int  value) { Number_of_cylinders = value; }
void Car::SetPower(int  value) { Power = value; }

string Car::GetBrand() const { return Brand; }
int  Car::GetNumber_of_cylinders() const { return Number_of_cylinders; }
int  Car::GetPower() const { return Power; }

void Car::Re_assignment_Power()
{
	int n;
	cout << "re-enter power" << endl;
	cin >> n;
	Power = n;
}
void  Car::Change_Power()
{
	cout << "change power" << endl;
	cin >> Power;
}

Car::Car() { Brand ="", Number_of_cylinders = 0, Power = 0; }
Car::Car(string Brand = "", int Number_of_cylinders = 0, int Power = 0)
{
	this->Brand = Brand;
	this->Number_of_cylinders = Number_of_cylinders;
	this->Power = Power;
}
Car::Car(const Car& A)
{
	Brand = A.GetBrand();
	Number_of_cylinders = A.GetNumber_of_cylinders();
	Power = A.GetPower();
}

Car& Car::operator = (const Car& A)
{
	Brand = A.Brand;
	Number_of_cylinders = A.Number_of_cylinders;
	Power = A.Power;

	return *this;
}
ostream& operator << (ostream& out, const Car& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Car& A)
{
	cout << "Enter a Brand "; in >> A.Brand;
	cout << "Enter a Number of cylinders "; in >> A.Number_of_cylinders;
	cout << "Enter a Power "; in >> A.Power;
	return in;
}
Car::operator string() const
{
	stringstream ss;
	ss << "Brand= " << Brand << endl;
	ss << "Number of cylinders= " << Number_of_cylinders << endl;
	ss << "Power= " << Power << endl;

	return ss.str();
}

Car& Car::operator ++ ()
{
	Power++;
	return *this;
}
Car& Car::operator -- ()
{
	Power--;
	return *this;
}
Car Car::operator ++ (int)
{
	Car t(*this);
	Power++;
	return t;
}
Car Car::operator -- (int)
{
	Car t(*this);
	Power--;
	return t;
}