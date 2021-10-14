#include <iostream>
#include "myintvector.h"

using namespace std;

// Vector default constructor
myIntVector::myIntVector() {
	arrPtr = new int[10];
	m_size;
	m_capacity = 10;

};

// Vector default deconstructor
myIntVector::~myIntVector() {
	delete[] arrPtr;
	arrPtr = nullptr;
};


int myIntVector::push_back(int val) {
	arrPtr[-1] = val;
};

int myIntVector::size() {
	
	int count = 0;
	for (int i = 0; i < m_capacity; i++) {
		if (arrPtr[i] != NULL) {
			count += 1;
		};
	};

	return count;
};

int myIntVector::capacity() {
	return m_capacity;
};

int myIntVector::resize(int i) {
	int* newArr = new int[i];
	int array_capacity = capacity();
	if (i >= array_capacity) {
		for (int x = 0; x < size(); x++) {
			newArr[x] = arrPtr[x];
		};
	delete[] arrPtr;
	arrPtr = newArr;

	}
	else {
		for (int x = 0; x < i; x++) {
			newArr[x] = arrPtr[x];
		};
		delete[] arrPtr;
		arrPtr = newArr;
	}

	delete[] newArr;
	newArr = nullptr;
	

};
