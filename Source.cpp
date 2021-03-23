#include <iostream>
#pragma pack(1)
#include "Bus.h"

int main()
{
	Car a;
	Bus b;
	cin >> a;
	cin >> b;
	cout << a;
	cout << b;
	cout << "\nRe_assignment: " << endl;
	a.Re_assignment_Brand();
	a.Change_Power();
	b.Re_assignment_Number_of_passenger_seats();
	cout << a;
	cout << b;
	cout << "\nChange: " << endl;
	a.Change_Brand();
	a.Change_Power();
	b.Change_Number_of_passenger_seats();
	cout << a;
	cout << b;
	return 0;
}