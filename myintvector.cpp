#include <iostream>
#include "myintvector.h"

using namespace std;
// Class implementation

// Worked along side with Daniel Cullen x00168408 and Hubert Bukowski x00161898

// Vector default constructor
myIntVector::myIntVector() {
	cout << "Constructing the vector" << endl;
	m_capacity = 15;
	arrPtr = new int[m_capacity];
	m_size = 0;
};

// Vector default deconstructor
myIntVector::~myIntVector() {
	cout << "Deconstructing the vector";
	delete[] arrPtr;
	arrPtr = nullptr;
};


void myIntVector::push_back(int val) {
	if (m_size == m_capacity) {
		cout << "!!!The size and capity are the same cannot push back!!!" << endl;
		cout << "----Call the resize function to increase size----" << endl;
	}
	else {
		arrPtr[m_size] = val;
		m_size++;
	}
};

int myIntVector::size() {
	return m_size;
};

int myIntVector::capacity() {
	return m_capacity;
};

 void myIntVector::resize(int i) {
	 int* newPtr;
	 newPtr = new int[i];
	 if (i > m_capacity) { 
		 for (int index = 0; index < m_capacity; index++) {
			 newPtr[index] = arrPtr[index];
		 }
		 for (int index = 10; index < m_capacity; index++) {
			 newPtr[index] = 0;
		 }
		 delete[] arrPtr;
		 arrPtr = nullptr;
		 arrPtr = new int[i];
		 for (int z = 0; z < i; z++) {
			 arrPtr[z] = newPtr[z];
		 }

	 }
	 else {
		 int newSize = 0;
		 for (int index = 0; index < i; index++) {
			 newPtr[index] = arrPtr[index];
		 }
		 if (i >= m_size) {
			 for (int index = 0; index < m_size; index++) {
				 arrPtr[index] = newPtr[index];
				 newSize++;
			 }
		 }
		 else {
			 for (int index = 0; index < i; index++) {
				 arrPtr[index] = newPtr[index];
				 newSize++;
			 }
		 }
		 m_size = newSize;
	 }
	 m_capacity = i;
	 delete[] newPtr;
	 newPtr = nullptr;
};

 const int myIntVector::at(int i) const {
	 if (i > m_size || i < 0) {

		 if (i > m_capacity) {
			 cout << "Array index out of bounds - Increase vector size" << std::endl;
		 }
		 else {
			 cout << "Index position " << i << " is empty" << std::endl;
		 }
		 return -1;
	 }
	 else {
		 return arrPtr[i];
	 }
 };

void myIntVector::print() {
	 for (int i = 0; i < m_size; i++) {
		 std::cout << arrPtr[i] << std::endl;
	 }
 }