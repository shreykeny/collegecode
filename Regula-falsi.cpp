#include<iostream>
#include <conio.h>
#include<math.h>

using namespace std;


int main() {
	int x = 0;
	float x1 = 0;
	float x2 = 0;
	float x0 = 0;
	float f = 0;
	float f1 = 0;
	float f2 = 0;
	float f0 = 0;
	float save = -0.0000002;





	for (int i = -15; i < 15; i++) {
		f1 = i*i*i - 2 * i - 5;
		f2 = (i + 1)*(i + 1)*(i + 1) - 2 * (i + 1) - 5;

		if (f1 < 0 && f2 >0 || f1 > 0 && f2 < 0) {
			x1 = (float)i;
			x2 = (float)i + 1;

			break;
		}

	}

	cout << "It no" << "\t";
	cout << "x1" << "\t";
	cout << "x2" << "\t";
	cout << "x0" << "\t";
	cout << "f(x1)" << "\t";
	cout << "f(x2)" << "\t";
	cout << "f(x0)" << endl;



	x0 = x1 - ((f1 * (x2 - x1)) / (f2 - f1));

	f0 = x0*x0*x0 - 2 * x0 - 5;

	save = x0;

	for (int j = 0; j < 10; j++) {

		
		cout  << j + 1 << "\t";
		cout << x1 << "\t";
		cout  << x2 << "\t";
		cout << x0 << "\t";
		cout << f1 << "\t";
		cout <<"\t"<< f2 << "\t";
		cout << f0  <<"\t" <<endl;

		if (f0 < 0 && f1 < 0) {
			x1 = x0;
		}

		if (f2 < 0 && f1 < 0) {
			x2 = x0;


		}

		if (f1 > 0 && f0 > 0) {
			x1 = x0;
			

		}

		if (f2 > 0 && f0 > 0) {
			x2 = x0;
			

		}


		f0 = x0*x0*x0 - 2 * x0 - 5;
		f1 = x1*x1*x1 - 2 * x1 - 5;
		f2 = x2*x2*x2 - 2 * x2 - 5;

		


	



	}








	_getch();


}
