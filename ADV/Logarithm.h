#pragma once
#include<math.h>
#include"AdvancedCalculator.h"
class Logarithm
{
	double value;
public:
	Logarithm(double);
	double Log();
	double Ln();
	double ex();
	//double LdExp();
	~Logarithm();
};
Logarithm::~Logarithm()
{

}
Logarithm::Logarithm(double v) 
{
	value = v;
}
double Logarithm::Log()
{
	double a = log10(value);
	return a;
}
double Logarithm::Ln()
{
	double a = log(value);
	return a;
}
double Logarithm::ex()
{
	double a = exp(value);
	return a;
}
//double Logarithm::LdExp()
//{
//	double a=
//}
