#include<iostream>
#include<conio.h>
using namespace std; 

class employee {
	int emp_id, emp_age;
	char emp_name[100];

public: void inputData() {
	cout << "Enter your ID";
	cin >> emp_id;
	cout << "Enter your name";
	cin >> emp_name;
	cout << "Enter your age";
	cin >> emp_age;

}

void displayData() {
	cout << endl << "Employee ID:" << emp_id << endl;
	cout << "Employee Name: " << emp_name << endl;
	cout << "Employee Age" << emp_age << endl;


}

};

int main() {

	int n;
	cout << "How many employees do you wish to register?";
	cin >> n;
	employee ch[100];


	for (int i = 0; i < n; i++) {
		ch[i].inputData();


	}

	for (int i = 0; i < n; i++) {
		ch[i].displayData();
	


	}

	_getch(); 
}
