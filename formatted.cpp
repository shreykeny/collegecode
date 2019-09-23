// write a program to create a list containing item name , cost  , total value 
// name -> left justified, other two -> right
//cost should be float 
// precision == 2 digits
// trailing 0s also have to be shwon 

// Question 2 : modify above table by adding two more columns 
// one will fill the unused spaces in the total cost with astericks and wone will fill with hyphen 

#include<iostream>
#include<conio.h>
using namespace std; 

int main() {

	int items[] = { 10,8,12 };
	float cost[] = { 75.544 , 100.24 , 60.94 };
	int i; 



	cout.setf(ios::left, ios::adjustfield);
	cout.width(15);
	cout << "ITEMS";
	cout.width(15);
	cout.setf(ios::right, ios::adjustfield);
	cout << "COST";
	cout.width(15);
	cout << "TOTAL";
	cout.width(15);
	cout << " * TOTAL";
	cout.width(15);
	cout << " - TOTAL";
	cout << "\n";


	for (i = 0; i < 3; i++) {
		cout.fill(' ');
		cout.setf(ios::showpoint); 
		cout.precision(4);
		cout.setf(ios::left, ios::adjustfield);
		cout.width(15);
		cout << items[i];
		cout << "|";

		cout.setf(ios::right, ios::adjustfield);
		cout.width(15);
		cout << cost[i];
		cout << "|";

		cout.width(15);
		cout << items[i] * cost[i];
		cout << "|";

		cout.fill('*');
		cout.width(15);
		cout << items[i] * cost[i];
		cout << "|";

		cout.fill('-');
		cout.width(15);
		cout << items[i] * cost[i];
		cout << "|";




		cout << "\n";

		
	}

	_getch();
}
