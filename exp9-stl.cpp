#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>
using namespace std; 

int main() {
	vector <int> v1;

	int n; 
	int pos1, pos2, ele1, ele2; 
	int temp; 

	cout << "Enter 5 elements into the array" << endl;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		v1.push_back(n);
	}



	for (int j = 0; j < v1.size(); j++) {
		cout << v1[j]<< endl;
	}


	sort(v1.begin(), v1.end());

	cout << endl; 


	for (int j = 0; j < v1.size(); j++) {
		cout << v1[j] << endl;
	}

	
	v1.erase(v1.begin() + 2);

	cout << endl; 

	for (int j = 0; j < v1.size(); j++) {
		cout << v1[j] << endl;
	}
 
	cout << "What two positions would you like elements to be added?" << endl; 

	cin >> pos1; 
	cin >> pos2; 

	cout << "What elements do you wanna add on" << pos1 << "position &" << pos2 << "position" << endl; 

	cin >> ele1;
	cin >> ele2;



	v1.insert(v1.begin() + pos1 - 1, ele1);

	v1.insert(v1.begin() + pos2 - 1, ele2);

	for (int j = 0; j < v1.size(); j++) {
		cout << v1[j] << endl;
	}



	
v1.pop_back(); 

cout << endl; 
for (int j = 0; j < v1.size(); j++) {
	cout << v1[j] << endl;
}

v1.clear(); 


for (int j = 0; j < v1.size(); j++) {
	cout << v1[j] << endl;
}

	


	_getch();

}
