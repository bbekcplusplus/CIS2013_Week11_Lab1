#include <iostream>
#include <cstring>
using namespace std;

class BirthDate
{
	public;
	int year;
	int month;
	int day;
	void print()
	{
		cout << month << "/" << day << "/" << year;
	}

	void set(int d, int m, int y)
	{
		year = y;
		month = m;
		day = d;
	}
};

int main()
{
	BirthDate bob;

	cout << "Enter the Bobs birthday day: ";
	cin >> bob_bday.day;

	cout << "Enter the Bobs birthday year: ";
	cin >> bob_bday.year;

	cout << "Enter the Bobs birthday month: ";
	cin >> bob_bday.month;
	
	cout << "Bobs birthday is ";
	printmyDate(bob_bday);
	cout << endl;

	BirthDate tom;
	tom.set(20, 5, 1984);
	cout << "Tom's birthday is ";
	tom.print();

	return 0;
}