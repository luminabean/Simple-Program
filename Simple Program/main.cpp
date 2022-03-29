#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
	Circle circle;
	circle.setRadius(3);
	circle.area();

	Rectangle rect;
	rect.setLength(5, 2);
	rect.area();

	Rectangle square;
	square.setLength(5);
	square.area();
}