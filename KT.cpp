// KT.cpp : This file contains the 'main' function. Program execution begins and ends there.
// NGUYEN VAN DUY KHANG-DE CHAN
#include <iostream>
using namespace std;
int main() {
	float a;
	cout << "Nhap chieu dai:";
		cin >> a;
		float b;
		cout << "Nhap chieu rong:";
		cin >> b;
	float chuvi = (a+b)*2;
	float dientich = a * b;
	cout << "Chu vi hinh vuong la:" << chuvi << endl;
	cout << "Dien tich hinh vuong la: " << dientich << endl;
		return 0;
}