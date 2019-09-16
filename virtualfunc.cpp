#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

class media {
protected: char title[100];
		   float price; 

public: virtual void display() {
	cout << "title" << title;
	cout << "price" << price;

}; 
		media(char *s, float p ) {
			strcpy_s(title, s); 
			price = p; 
		}
};


class book : public media {
	int pages; 

public: book(char *s, float p, int f) : media(s, p) {
	pages = f; 
}

		void display() {
			cout << "title" << title;
			cout << "price" << price;
			cout << "pages" << pages;
		}
};


class tape : public media {
	float time; 

public: tape(char *s, float p, float t) : media(s, p) {
	time = t;
}

		void display() {
			cout << "title =" << title; 
			cout << "price =" << price; 
			cout << "time =" << time; 
		
		}

};

int main() {
	book b("C++", 15050, 500);
	tape t("C#", 15050, 60);
	media m("Ricty", 5495);

	media *mptr, *mptr2, *mptr3;

	mptr = &b; 
	mptr->display();
	//mptr2 = &t; 
	//mptr2->display();
	//mptr3 = &m;
	//mptr3->display();




	_getch();
	}
		


