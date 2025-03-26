#include <iostream>


#include "div.h"

#include "sub.h"
using namespace std;

template<typename T>

T plus(T a, T b){
	retrun a + b;
}

int main() {
	cout << "Hello, Calculator!" << endl;
	int a, b;
	a = 500;
	b = 25;
	// 각자 구현한 함수로 사칙연산 진행

	double divTest1 = 2.5 , divTest2 = 1.2;
	cout << "div(divTest1,divTets2)" << endl;
	cout << div(divTest1,divTets2) << endl;

	auto ret = sub(a, b);	
}