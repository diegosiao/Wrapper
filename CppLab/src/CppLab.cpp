//============================================================================
// Name        : CppLab.cpp
// Author      : Diego Morais
// Version     :
// Copyright   : Copyright 2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
using namespace CppLab_Model;

//Functions must be declared before being used (header or source)
void AddOne(int a);

void AddOne_OnHeap(int& a);

int main() {

	int a = 2;

	AddOne(a);
	cout << "When happens on Stack " << a << endl;

	AddOne_OnHeap(a);
	cout << "When happens on Heap " << a << endl;

	Test();

	return 0;
}

void AddOne(int a){
	a++;
}

void AddOne_OnHeap(int& a){
	a++;
}
