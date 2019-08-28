#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	float x = 0;
	float x1= 0;
	float x2 = 0;
	int i = -5;
	float f1; 
	float f2; 
	float save = 0.0001; 

	float f = (x*x*x) - 2 * x - 5; 
	float fd = (3 * (x*x)) - 2;
	

	for(i = -5 ; i < 5 ; i++ ) {
		f1 = float((i*i*i) - 2 * i - 5); 
		f2 = float(((i + 1)*(i +1)*(i +1)) - 2 * (i + 1) - 5); 
		fd = float((3 * (i*i)) - 2);


		if (f1 < 0 && f2 >0 ) {
			x1 = float(i); 
			x2 = float(i + 1);
			break; 
		}

	}

	cout << "Iteration no. " << "\t";
	cout << " x1" << "\t";
	cout << " x2" << "\t";
	cout << "f(x1)" << "\t";
	cout << "fd(x1)" << endl;


	for (int j = 0; j < 8; j++) {


		float f = (x1*x1*x1) - 2 * x1 - 5;
		fd = 3 * (x1*x1) - 2;
		x2 = x1 - ((f1) / (fd));



		cout << j + 1 << "\t" << "\t" << "  ";
		cout << x1 << "\t";
		cout << x2 << "\t"; 
		cout << f1 << "\t";
		cout << fd << endl;


		if (x2 == save) {
			cout << "ho";
		}


		x1 = x2; 
		float save = x2;






	}


	_getch();


}


