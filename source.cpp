#include <iostream>
#include <fstream>
#include "Room.h"
#include "Standard.h"
#include "Moderate.h"
#include "Superior.h"
#include "Junior_Suite.h"
#include "Suite.h"
using namespace std;

void filing()
{
	string name; 
	int age;
	string gender;
	string idnumber;
	int balance;
	int daystoreserve;
	int floornumber;
	string roomtype;
	int roomnumber;
	string checkin;
	string checkout;
	string timeremaining;
	ofstream fin;
	fin.open("Database.dat");
	if (fin.is_open())
	{
		cout << "Full Name: " << endl;
		cin >> name;
		fin << name;
		cout << "Age: " << endl; 
		cin >> age;
		fin << age;
		cout << "Gender: " << endl;
		cin >> gender;
		fin << gender;
		cout << "ID number: " << endl;
		cin >> idnumber;
		fin << idnumber;
		cout << "Balance: " << endl;
		cin >> balance; 
		fin << balance;
		cout << "Days to reserve: " << endl;
		cin >> daystoreserve;
		fin << daystoreserve;
		cout << "Floor Number: " << endl;
		cin >> floornumber;
		fin << floornumber;
		cout << "Room type: " << endl;
		cin >> roomtype;
		fin << roomtype;
		cout << "Room Number: " << endl;
		cin >> roomnumber;
		fin << roomnumber;
		cout << "Checkin time: " << endl;
		cin >> checkin;
		fin << checkin;
		cout << "Checkout time: " << endl;
		cin >> checkout;
		fin << checkout;
		// remining time 
		fin.close();
	}
	else
	{
		cout << "File not found." << endl;
	}

}
void menu()
{
	string custom;
	string custom1 = "new";
	string custom2 = "old";
	int x;
	cout << "[\t HOTEL MANAGEMENT SYSTEM -> Menu\t ]" << endl
		<< "1. Press 1 to Reserve a room" << endl
		<< "2. Press 2 to checkin a visitor/customer" << endl
		<< "3. Press 3 to View Reserved Rooms" << endl
		<< "4. Press 4 to see detailed report" << endl
		<< "5. Press 5 to exit" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "Are you a new customer or an old one ?" << endl;
		cin >> custom;

		if (custom == custom1)
			filing();
		else if (custom == custom2)
		{
			string name; 
			string search;
			cout << "Fullname: " << endl;
			cin >> name;
			fstream fin;
			fin.open("Database.dat");
			if (fin.is_open())
			{
				fin >> search;
				if (search == name)
				{
					// assign room 
				}
			}
		}

	}
}
int main()
{
	menu();

}
