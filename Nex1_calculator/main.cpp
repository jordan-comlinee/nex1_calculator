#include <iostream>
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
	// ���� ������ �Լ��� ��Ģ���� ����
	auto ret = sub(a, b);	
}