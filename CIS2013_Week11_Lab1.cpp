#include <iostream>
#include <cstring>
using namespace std;

struct myDate
{
	int day;
	int month;
	int year;
};
struct Person {
	myDate birthday;
	string firstname;
	string lastname;
};

void printmyDate(myDate d)
{
	cout << d.month << "/" << d.day << "/" << d.year << endl;
}

int main() {
	myDate bob_bday;
	myDate tom_bday;

	Person bob;
	bob.firstname = "Bob";
	bob.lastname = "Rockers";

	cout << "Enter the Bobs birthday day: ";
	cin >> bob_bday.day;

	cout << "Enter the Bobs birthday year: ";
	cin >> bob_bday.year;

	cout << "Enter the Bobs birthday month: ";
	cin >> bob_bday.month;

	cout << "Bobs birthday is ";
	printmyDate(bob_bday);
		cout << endl;
	
	cout << "Wow Tom has the same birthday: ";
	tom_bday = bob_bday;
	printmyDate(tom_bday);

	return 0;
}

