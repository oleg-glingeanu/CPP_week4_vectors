#include <iostream>

using namespace std;


// Declaring my class
class myIntVector {


// Private constructors
private:
	int m_size;
	int m_capacity;
	int* arrPtr;


// Public constructors
public:
	myIntVector();
	// Constructor with 1 argument 
	void push_back(int val);
	int size();
	int capacity();
	void resize(int i);
	void print();
	const int& at(int i) const;
	int& at(int i);
	~myIntVector();
	void print();

};


