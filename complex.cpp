#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
	float x, y;
public:
	complex() {}
	complex(float a)
	{
		x = y = a;
	}
	complex(float real, float imag)
	{
		x = real;
		y = imag;
	}
	friend complex sum(complex, complex);
	friend void display(complex);
};

complex sum(complex c1, complex c2)
{
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return (c3);
}
void display(complex c)
{
	cout << c.x << "+" << c.y << "j" << "\n";
}
int main()
{
	complex a(45, 6);
	complex b(3, 5);
	complex suma;
	suma = sum(a, b);
	cout << "a= ";
	display(a);
	cout << "b= ";
	display(b);
	cout << "Sum= ";
	display(suma);

	getch();
	return 0;
}
