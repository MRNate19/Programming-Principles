#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age\n";
	string first_name;
	double age;
	cin >> first_name;
	cin >> age;
	cout << "Hello, " << first_name << " (" << age * 12 << " months old)\n";
}