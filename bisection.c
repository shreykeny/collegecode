#include<stdio.h>
#include<math.h>
#include<conio.h>

float func(int x, int y, int z) {


	if (f0 > 0 && f1 > 0) {} 

	if (f0 > 0 && f2 > 0) {}


	if (f0 < 0 && f1 < 0) {}


	if (f0 < 0 && f2 < 0) {}


}


float main() {

	float f1 = 0;
	float f2 = 0;
	float f0 = 0; 
	float x1 = 0;
	float x2 = 0;
	float x0 = 0; 

	printf("\nit no.\t");
	printf("x1\t");
	printf("x2\t");
	printf("x0 = (x1+x2)/2\t");
	printf("f(x1)\t");
	printf("f(x2)\t");
	printf("f(x0)\t\n");



	for (int j = 0; j < 1; j++) {


		for (int i = -15; i <= 15; i++) {
			f1 = i*i - 3 * (i)-8;
			f2 = (i + 1)*(i + 1) - 8 * (i + 1) - 8;

			if ((f1 > 0 && f2 < 0) || (f1 < 0 && f2 > 0)) {

				x1 = (float)i;
				x2 = (float)i + 1;

				break;



			}


		}




		printf("%d\t", j + 1);
		printf("%.3f\t", x1);
		printf("%.3f\t", x2);
		float x0 = ((x1 + x2) / 2);
		printf("%.3f\t\t", x0);
		printf("%.3f\t", f1);
		printf("%.3f\t", f2);
		f0 = x0*x0 - 3 * x0 - 8;
		printf("%.3f\t", f0);














	}
	_getch();

}

