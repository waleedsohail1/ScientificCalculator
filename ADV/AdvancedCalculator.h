#pragma once
#include"Trignometric.h"
#include"Logarithm.h"
class AdvancedCalculator :public Trignometric, public Logarithm
{
	float value;
public:
	AdvancedCalculator(float );
	~AdvancedCalculator();
};
AdvancedCalculator::AdvancedCalculator(float a) :Trignometric(a), Logarithm(a)
{
	value = a;
}
AdvancedCalculator::~AdvancedCalculator()
{

}