#include<iostream>
#include<conio.h>
using namespace std; 

class user {
	char ch[100];
	int units; 
	float phase1, phase2, cost1, cost2, cost3, amount;

public: void myData() {

	cout << "Enter your name" << endl; 
	cin >> ch; 
	cout << "Enter number of units consumed";
	cin >> units; 
}

		void logic() {

			phase1 = units-100;
			if (phase1 > 0 ) {
				cost1 = 100 * (0.5);
				

			}

			else {
				cost1 = units*0.5;
			}

			phase2 = phase1 - 250;
			if (phase2 > 0 ) {
				cost2 = 250 * (0.7);
				
		
			}

			else {
				cost2 = phase1 * 0.7;
			
			}


			if (phase2 >= 350) {
				cost3 = phase2 * (0.9);

			}

			amount = 100 + cost1 + cost2 + cost3;
			

			

			if (amount > 350) {

				amount = amount + amount * (0.2);

			}
		}

			void printName() {
				cout <<endl << "Name:" << ch;
				cout <<endl << "Amount" << amount;
			}


		
};

int main() {
	int n; 

	cout << "How many users do you wish to register";
	cin >> n; 

	user users[100];

	for (int i = 0; i < n; i++) {
		users[i].myData(); 
		users[i].logic();

	}

	for (int i = 0; i < n; i++) {
		users[i].printName(); 

	}

	_getch(); 

}
