#include<iostream>
using namespace std;
class Basic{
	private:
	float result;
	int count;
	string str;
	float *numbers;
	int *operators;
	public:
	void length();
	void check();
	float display();
	Basic();
	void strtoiandoperators();
	Basic(string a);
	~Basic();
};
Basic::Basic()
{

}
Basic::~Basic()
{
}
float Basic::display()
{
	return result;
}

Basic::Basic(string a)
{
	count=0;
	str=a;
	Basic::length();
	numbers = new float[count];
	operators=new int [count];
	for (int i = 0; i < count; i++)
	{
		numbers[i] = 0;
	}
	Basic::strtoiandoperators();
	Basic::check();
}
void Basic::length()
{
		for(int i=0;str[i]!=0;i++)
		if(str[i]<48||str[i]>57 && !str[i]=='.')
			count++;

}
void Basic::strtoiandoperators()
{
	int pointer = 0;
	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i]<48 || str[i]>57)
		{
			operators[pointer] = str[i];
			pointer++;
		}
	}
	int num = 0;
	pointer = 0;
	for (int j = 0; str[j] != 0; j++)
	{
		if (str[j]<48 || str[j]>57)
			num = 0;
		if (str[j] >= 48 && str[j] <= 57)
		{

			int x = str[j] - 48;
			num = (10 * num + x);

			if (str[j + 1]<48 || str[j + 1]>57)
			{
				numbers[pointer] = num;
				pointer++;
			}
		}
	}

}
void Basic::check()
{	
	
	result=numbers[0];
		for(int i=0;i<count;i++)
	{
		if (operators[i]==42)
		result = result*numbers[i+1];
		else if (operators[i]==43)
			result = result + numbers[i + 1];
		else if (operators[i]==45)
			result = result - numbers[i + 1];
		else if (operators[i]==47)
			result = result / numbers[i + 1];
	}
}
