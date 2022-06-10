// Week 03 - GitHub Submission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//cout:endl;
#include <iostream>

//string
#include<string>
//txt file
#include<fstream>

//std
using namespace std;


//main
int main()
{
	cout << "----------------------------------------" << endl;
	cout << "ITCS 2530 -  Week 03 - GitHub Submission" << endl;
	cout << "----------------------------------------" << endl;
	cout << endl;
	cout << endl;

	//txt file
	fstream myFile;
	//string
	string name, destination;
	char fragile;

	//variables
	int fee = 0, fragile_fee = 0;
	int total;

	//input
	cout << "Please enter thr item name (no space)..:";
	cin >> name;

	cout << "Is the item fragile? (y=yes/n=no)......:";
	cin >> fragile;

	if (fragile == 'y' or fragile == 'Y')
		fragile_fee += 2;

	else if (fragile == 'n' or fragile == 'N')
		fragile_fee += 0;
	else {
		cout << "invalid entry, exiting" << endl;
	}

	if (fragile == 'n' or fragile == 'y' or fragile == 'Y' or fragile == 'N') {
		cout << "Plesse enter your order total..........:";
		cin >> total;
		cout << "Please enter destination. (usa/can/aus)..:";
		cin >> destination;

	

		if (destination == "usa") {
			if (total < 50)
				fee = 6 + fragile_fee;
			else if (total < 100)
				fee = 9 + fragile_fee;
			else if (total < 150)
				fee = 12 + fragile_fee;
			else {
				fee = fragile_fee + 0;
			}
		}
		if (destination == "can") {
			if (total < 50)
				fee = 8 + fragile_fee;
			else if (total < 100)
				fee = 12 + fragile_fee;
			else if (total < 150)
				fee = 15 + fragile_fee;
			else {
				fee = fragile_fee + 0;
			}
		}

		if (destination == "aus") {
			if (total < 50)
				fee = 10 + fragile_fee;
			else if (total < 100)
				fee = 14 + fragile_fee;
			else if (total < 150)
				fee = 17 + fragile_fee;
			else {
				fee = fragile_fee + 0;
			}
		}
		//output
		cout << endl;
		cout << endl;
		cout << "Your item is..................."  << name << endl;
		cout << "Your shipping cost is..........$" << fee << endl;
		cout << "You are shipping to............"<< destination << endl;
		
		cout << "Your total shipping costs are..$" << fee + total << endl;
		cout << endl;
		cout << "------------------------THANK YOU !" << endl;


		//txt file
		myFile.open("Order.txt", ios::out);
		if (myFile.is_open()) {
			myFile << endl;
			myFile << endl;
			myFile << "Your item is " << name << endl;
			myFile << "Your shipping cost  is " << fee << endl;
			myFile << "You are shipping to " << destination << endl;
			myFile << "Your total shipping costs are " << fee + total << endl;
			myFile.close();
		}
	}


	return 0;

}


