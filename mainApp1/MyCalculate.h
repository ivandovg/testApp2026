#pragma once
class MyCalculate
{
	double x;
	double y;
public:
	MyCalculate(double x, double y) {
		this->x = x;
		this->y = y;
	}
	double Mul(int a, int b) {
		return a * b;
	}

};

