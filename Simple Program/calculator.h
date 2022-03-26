#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H

extern const float PI;
extern const float EXPONENTIAL;

class Circle {
private:
	int radius;
public:
	void setRadius(int r);
	void area();
	void circumference();
};

class Sphere {
private:
	int radius;
public:
	void setRadius(int r);
	void area();
	void volume();
};

#endif