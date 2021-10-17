#include <iostream>
#include "myintvector.h"

using namespace std;

// Worked along side with Daniel Cullen x00168408 and Hubert Bukowski x00161898

int main() {
	myIntVector v;
	for (int i = 0; i < 10; i++){
		cout << "The size is: " << v.size() << endl;
		v.push_back(i);
	}
	cout << "The size is 10 about to resize to 20" << endl;
	v.resize(20);
	v.print();
	cout << "The size is: " << v.size() << endl;
	cout << "The capacity is " << v.capacity() << endl;
	cout << "The size is: " << v.size() << endl;
	v.resize(7);
	v.print();
	cout << "The size is: " << v.size() << endl;
	cout << "The capacity is " << v.capacity() << endl;
}