#pragma once
#include"Fictorial.h"
#include "Power.h"
#include<math.h>
class ScientificCalc : public Power, public Fictorial
{
	float aya;
public:
	int gcd(int ,int);
	ScientificCalc();
	ScientificCalc(int, int);
	ScientificCalc(float, int, float);
	ScientificCalc(int v); 
	ScientificCalc(float v);
	~ScientificCalc();
	void display();
	void reverse(char *str, int len);
	int intToStr(int x, char str[], int d);
	void ftoa(float n, char *res, int afterpoint);
};

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
ScientificCalc::ScientificCalc(float a, int b, float c) : Fictorial(0), Power(a,b,c)
{

}
ScientificCalc::ScientificCalc(int a, int b) :Fictorial(a, b), Power(0,0,0)
{

}
ScientificCalc::ScientificCalc() : Fictorial(0), Power(0,0,0)
{
	
}

ScientificCalc::~ScientificCalc()
{

}

ScientificCalc::ScientificCalc(int v) : Fictorial(v), Power(0, 0, 0)
{
	aya = v;
}
ScientificCalc::ScientificCalc(float v) : Fictorial(v), Power(0, 0, 0)
{
	aya = v;
}



int ScientificCalc::gcd(int n1, int n2)
{
	int HCF = 1;
	if (n1 > n2)
	{
		for (int i = 2; i < n2; i++)
		{
			if (n1%i == 0 && n2%i == 0)
				HCF = i;
		}
	}
	else
	{
		for (int i = 2; i < n1; i++)
		{
			if (n1%i == 0 && n2%i == 0)
				HCF = i;
		}

	}
	return HCF;
}
void ScientificCalc::display()
{
	char res[20];

	int val;
	int j = 0;
	int check = 0;
	float n = aya;
	ftoa(n, res, 4);
	for (int i = 0; res[i] != '\0'; i++)
	{


		if (res[i] == '.')
		{
			for (j = i + 1; res[j] != 48; j++)
				check++;
		}

	}
	val = n;
	int num_ten = 1;
	float new_num = (n - val);
	for (int r = 0; r < check; r++)
	{
		num_ten = num_ten * 10;
	}
	val = val * num_ten;
	new_num = new_num *num_ten;
	val = val + new_num;
	int lcm = gcd(val, num_ten);
	cout << val / lcm << "/";
	cout << num_ten / lcm << endl;

}




void ScientificCalc::reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}

int ScientificCalc::intToStr(int x, char str[], int d)
{
	int i = 0;
	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	while (i < d)
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;
}

void ScientificCalc::ftoa(float n, char *res, int afterpoint)
{

	int ipart = (int)n;


	float fpart = n - (float)ipart;


	int i = intToStr(ipart, res, 0);


	if (afterpoint != 0)
	{
		res[i] = '.';
		fpart = fpart * pow(10, afterpoint);

		intToStr((int)fpart, res + i + 1, afterpoint);
	}
}
