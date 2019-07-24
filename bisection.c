#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>


/* Numerical Method - Sem 3 - Bisection Method */





int main() {
	float f1 = 0; // f(x1)
	float f2 = 0; // f(x2)
	float f0 = 0; //f(x3)
	float x1 = 0;
	float x2 = 0;
	float x0 = 0;
	float save = -0.000002;
	int i, j;

	printf("\nit no.\t");
	printf("x1\t");
	printf("x2\t");
	printf("x0 = (x1+x2)/2\t");
	printf("f(x1)\t");
	printf("f(x2)\t");
	printf("f(x0)\t\n");

	for (i = -15; i <= 15; i++) {
		f1 = i*i - 4 * (i)-10;
		f2 = (i + 1)*(i + 1) - 4 * (i + 1) - 10;

		if ((f1 > 0 && f2 < 0) || (f1 < 0 && f2 > 0)) {

			x1 = (float)i;
			float mu;
			char str[100];
			sprintf(str, "%.3f", x1);
			sscanf(str, "%f", &mu);
			x1 = mu;

			x2 = (float)i + 1;
			sprintf(str, "%.3f", x2);
			sscanf(str, "%f", &mu);
			x0 = mu;
			break;

		}
	}


	for (j = 0; j < 100; j++) {
		printf("\n");
		printf("%d\t", j + 1);
		printf("%.4f\t", x1);
		printf("%.4f\t", x2);
		float x0 = ((x1 + x2) / 2);

		float mu;
		char str[100];
		sprintf(str, "%.2f", x0);
		sscanf(str, "%f", &mu);
		x0 = mu;

		f1 = x1*x1 - 4 * (x1)-10;
		f2 = (x1 + 1)*(x1 + 1) - 4 * (x1 + 1) - 10;



		printf("%.3f\t\t", x0);
		printf("%.4f\t", f1);
		printf("%.4f\t", f2);
		f0 = x0*x0 - 4 * x0 - 10;
		printf("%.4f\t", f0);

		if (save == x0) {

			break;
		}
		save = x0;


		if (f0 > 0 && f1 > 0) {
			x1 = x0;
		}

		if (f0 > 0 && f2 > 0) {
			x2 = x0;
		}

		if (f0 < 0 && f1 < 0) {
			x1 = x0;
		}

		if (f0 < 0 && f2 < 0) {
			x2 = x0;
		}

	}
	_getch();

}

