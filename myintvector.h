#include <iostream>

using namespace std;

class myIntVector {
public:
	myIntVector();
	int push_back(int val);
	int size();
	int capacity();
	int resize(int i);
	~myIntVector();

private:
	int m_size;
	int m_capacity;
	int* arrPtr;
};


