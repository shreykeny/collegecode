#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>

int main() {


	float f1 = 0;
	float f2 = 0;




	float x1 = 4;
	float x2 = 2;
	float x3 = 0;
	float save = 100000;

	printf("It. no \t");
	printf("x1 \t");
	printf("x2 \t");
	printf("x3 \t");
	printf("f(x1) \t");
	printf("f(x2) \n");

	for (int i = 0; i < 10; i++) {



		printf("%d \t", i + 1);
		printf("%0.4f \t", x1);
		printf("%0.4f \t", x2);

		f1 = x1*x1 - 4 * x1 - 10;
		f2 = x2 *x2 - 4 * x2 - 10;

		x3 = ((f2*(x1)-f1*(x2)) / (f2 - f1));

		char str[40];

		sprintf(str, "%.4f", x3);

		sscanf(str, "%f", &x3);




		printf("%0.4f \t", x3);

		printf("%0.4f \t", f1);
		printf("%0.4f \n", f2);


		if (save == x3) {
			break;

		}

		save = x3;
		x1 = x2;
		x2 = x3;


	}


	_getch();
}
