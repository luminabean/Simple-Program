#include <iostream>
using namespace std;

#include "calculator.h"

const float PI = 3.1415926535;
const float EXPONENTIAL = 2.7182818284;


void Circle::setRadius(int r) {
	radius = r;
}

void Circle::area() {
	cout << "반지름이 " << radius << "인 원의 넓이는 " << PI * pow(radius, 2) << endl;
}

void Circle::circumference() {
	cout << "반지름이 " << radius << "인 원의 둘레는 " << 2 * PI * radius << endl;
}


void Sphere::setRadius(int r) {
	radius = r;
}
void Sphere::area() {
	cout << "반지름이 " << radius << "인 구의 겉넓이는 " << 4 * PI * pow(radius, 2) << endl;
}
void Sphere::volume() {
	cout << "반지름이 " << radius << "인 구의 부피는 " << (4 / 3) * PI * pow(radius, 3) << endl;
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
	cout << "가로가 " << a << ", 세로가 " << b << "인 사각형의 넓이는 " << a * b << endl;
}
void Rectangle::perimeter() {
	cout << "가로가 " << a << ", 세로가 " << b << "인 사각형의 둘레는 " << 2 * a * b << end
}