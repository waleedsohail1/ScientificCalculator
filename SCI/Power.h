#pragma once
#include"ScientificCalc.h"
#include<math.h>

class Power 
{
	float num,deno;
	int numer;
public:
	Power(float num, int numer, float deno = 1);
	float calcPower();
	~Power();
};


float Power::calcPower()
{
	if (deno == 1)
	{
		float pow = 1;
		for (int i = 0; i < numer; i++)
		{
			pow = num*pow;
		}
		return pow;
	}
	else
	{
		float ans;
		float f1 = deno*1.0;
		float f2 = numer / f1;
		ans = pow(num, f2);
		return ans;

	}

}
Power::~Power()
{

}
Power::Power(float num, int numer, float deno)
{

}