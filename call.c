#include<stdio.h>
#include<conio.h>

int num1, num2;


int numbers() {
	printf("Enter number 1\n");
	scanf_s("%d", &num1);
	printf("Enter number 2\n");
	scanf_s("%d", &num2);
	printf("1st number = %d , 2nd number = %d\n", num1, num2);
	return num1;
	return num2;

}

void reference(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
	printf("number 1 = %d || number 2 = %d\n", *p, *q);
}

void value(int x, int y) {
	int temp = x;
	x = y;
	y = temp;

	printf("number 1 = %d || number 2 = %d\n", x, y);

}

int main() {

	int choice;

	numbers();


	printf("Press 1: Call By Reference method || Press 2: Call By Value method \n");
	scanf_s("%d", &choice);


	switch (choice) {
	case 1: reference(&num1, &num2);
		break;

	case 2: value(num1, num2);
		break;
	}

	_getch();
}
