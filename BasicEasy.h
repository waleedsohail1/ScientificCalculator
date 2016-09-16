class BasicEasy
{
	float val1;
	float val2;
public:
	float add();
	float sub();
	float div();
	float mul();
	BasicEasy();
	BasicEasy(float,float);
	~BasicEasy();
};
BasicEasy::BasicEasy()
{

}
BasicEasy::BasicEasy(float a, float b)
{
	val1 = a;
	val2 = b;
}
BasicEasy::~BasicEasy()
{

}

float BasicEasy::add()
{
	return val1 + val2;
}
float BasicEasy::sub()
{
	return val1 - val2;
}
float BasicEasy::mul()
{
	return val1 * val2;
}
float BasicEasy::div()
{
	return val1/val2;
}
