#include <iostream>
using namespace std;

#include "calculator.h"

const float PI = 3.1415926535;
const float EXPONENTIAL = 2.7182818284;


void Circle::setRadius(int r) {
	radius = r;
}

void Circle::area() {
	cout << "�������� " << radius << "�� ���� ���̴� " << PI * pow(radius, 2) << endl;
}

void Circle::circumference() {
	cout << "�������� " << radius << "�� ���� �ѷ��� " << 2 * PI * radius << endl;
}


void Sphere::setRadius(int r) {
	radius = r;
}
void Sphere::area() {
	cout << "�������� " << radius << "�� ���� �ѳ��̴� " << 4 * PI * pow(radius, 2) << endl;
}
void Sphere::volume() {
	cout << "�������� " << radius << "�� ���� ���Ǵ� " << (4 / 3) * PI * pow(radius, 3) << endl;
}


void Rectangle::setLength(int length) {
	a = length;
	b = length;
}
void Rectangle::setLength(int width, int height) {
	a = width;
	b = height;
}
void Rectangle::area() {
	cout << "���ΰ� " << a << ", ���ΰ� " << b << "�� �簢���� ���̴� " << a * b << endl;
}
void Rectangle::perimeter() {
	cout << "���ΰ� " << a << ", ���ΰ� " << b << "�� �簢���� �ѷ��� " << 2 * a * b << end
}