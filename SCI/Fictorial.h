#pragma once
#include<math.h>

class Fictorial
{
	int n, p, r;
public:
	Fictorial(int );
	Fictorial(int, int);
	~Fictorial();
	long long fic();
	long long fact(int);
	long long calcNcr();
	long long calcuNpr(int,int);
	long long calcNpr();
};

Fictorial::Fictorial(int num)
{
	n = num;
}

Fictorial::Fictorial(int num,int n2)
{
	n = num;
	r = n2;
	p = n2;
}

long long Fictorial::fic()
{
	long long pro = 1;
	while (n != 0)
	{
		pro = pro*n;
		n--;
	}
	return pro;
}
long long Fictorial::fact(int n)
{
	long long pro = 1;
	while (n != 0)
	{
		pro = pro*n;
		n--;
	}
	return pro;
}

long long Fictorial::calcNpr()
{
	if (n < p)
		throw 404;
	else
	{
		long long npr = fact(n) / fact(n - p);
		return npr;
	}
}
long long Fictorial::calcuNpr(int n, int p)
{
	if (n < p)
		throw 404;
	else
	{
		long long npr = fact(n) / fact(n - p);
		return npr;
	}
}


long long Fictorial::calcNcr()
{
	long long ncr = calcuNpr(n, r) / fact(r);
	return ncr;
}
Fictorial::~Fictorial()
{

}