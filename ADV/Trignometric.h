#pragma once
#include<math.h>
#include<iostream>
#include"AdvancedCalculator.h"
using namespace std;
class Trignometric 
{
	int value;
public:
	Trignometric(float);
	double rad2deg();
	double Sin();
	double Cos();
	double Tan();
	double Cosecent();
	double Sec();
	double Cot();
	double InverseCos();
	double InverseTan();
	double InverseSin();
	double HyperbolicSin();
	double HyperbolicCos();
	double HyperbolicTan();
	double InverseHSin();
	double InverseHCos();
	double InverseHTan();

	~Trignometric();
};

double Trignometric::rad2deg()
{
	return value*(3.1415 / 180);
}
Trignometric::Trignometric(float v) 
{
	value = v;
}
double Trignometric::Sin()
{
	double y = rad2deg();
	double a = sin(y);
	return a;
}
double Trignometric::Cos()
{
	double y = rad2deg();
	double a = cos(y);
	return a;
}
double Trignometric::Tan()
{
	double y = rad2deg();
	double a = tan(y);
	return a;
}
double Trignometric::Cosecent()
{
	double y = rad2deg();
	double a = sin(y);
	return 1/a;
}
double Trignometric::Sec()
{
	double y = rad2deg();
	double a = cos(y);
	return 1/a;
}
double Trignometric::Cot()
{
	double y = rad2deg();
	double a = tan(y);
	return 1/a;
}
double Trignometric::InverseSin()
{
	double a = asin(value) / (3.1415 / 180);
	return a;
}
double Trignometric::InverseCos()
{
	double a = acos(value) / (3.1415 / 180);
	return a;
}
double Trignometric::InverseTan()
{
	double a = atan(value) / (3.1415 / 180);
	return a;
}
double Trignometric::HyperbolicSin()
{
	double a = sinh(value);
	return a;
}
double Trignometric::HyperbolicCos()
{
	double a = cosh(value);
	return a;
}
double Trignometric::HyperbolicTan()
{
	double a = tanh(value);
	return a;
}
double Trignometric::InverseHSin()
{
	double a = asinh(value);
	return a;
}
double Trignometric::InverseHCos()
{
	double a = acosh(value);
	return a;
}
double Trignometric::InverseHTan()
{
	double a = atanh(value);
	return a;
}
Trignometric::~Trignometric()
{

}