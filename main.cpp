#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "CRectangle.h"

using namespace std;

int main() {

	Rectangle rectA(10, 5);
	Rectangle rectB(3, 7);

	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;

	cout << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump();
	cout << "****** ********* ******" << endl;

	rectA.SetWidth(9);

	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;

	cout << "Perimeter A : " << rectA.GetPerimeter() << endl;
	cout << "Area A : " << rectA.GetArea() << endl;
	cout << "Perimeter B : " << rectB.GetPerimeter() << endl;
	cout << "Area B : " << rectB.GetArea() << endl;

	return 0;

}