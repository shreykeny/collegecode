#include<iostream>
#include<conio.h>

using namespace std;

class student {
	char sname[100];
	char dept[100];
	int roll;
	int age;


public:

	void input() {
		cout << "Enter your name : " << endl;
		cin >> sname;
		cout << "Enter your department  :" << endl;
		cin >> dept;
		cout << "Enter your roll no. : " << endl;
		cin >> roll;
		cout << "Enter your age : ";
		cin >> age;

	}

	void display() {

		if (age > 21) {
			cout << endl << endl << "Name:" << sname;
			cout << endl << "Dept: " << dept;
			cout << endl << "Roll No:" << roll;
			cout << endl << "Age:" << age;
		}

	}



};

int main() {
	int n;
	student students[100];

	cout << "How many students do you want to register" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		students[i].input();
	}

	for (int j = 0; j < n; j++) {

		students[j].display();

	}



	_getch();
}
