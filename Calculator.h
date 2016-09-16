#include"ADV\AdvancedCalculator.h"
#include"SCI\ScientificCalc.h"
#include"Basic.h"
#include"Calc.h"
#include"BasicEasy.h"
#include<fstream>
class Calculator:public Calc
{
	Basic Al;
	BasicEasy AE;
	ScientificCalc Sc;
	AdvancedCalculator AC;
public:
	void working_of_calc();
	Calculator();
	~Calculator();
};
Calculator::Calculator() : AC(0)

{

}
void Calculator::working_of_calc()
{
	while (1)
	{
		int ch = 0;
		char m1;
		char data[5000] = { 0 };
		ofstream infile;
		ifstream outfile;
		outfile.open("Filing/MainMenu.txt");
		outfile.get(data, 5000, EOF);
		cout << data << endl;
		outfile.close();
		cin >> m1;
		switch (m1)
		{
		case '1':
		{
				  for (int i = 0; i < 5000; i++)
					  data[i] = 0;
				  char str[500];
				  outfile.open("Filing/Menu1.txt");
				  outfile.getline(data, 5000, EOF);
				  outfile.close();
				  cout << data;
				  cin.ignore();
				  cin.getline(str, 500);
				  Basic a(str);
				  cout << "Result is: " << a.display();
				  infile.open("History.txt", ios::app);
				  infile << str << endl << a.display() << endl << endl;
				  infile.close();
				  break;
		}
		case '2':
		{
				  for (int i = 0; i < 5000; i++)
					  data[i] = 0;
				  string a;
				  outfile.open("Filing/Menu2.txt");
				  outfile.getline(data, 5000, '^');
				  cout << data;
				  int ch;
				  float num1, num2;
				  cin >> ch;
				  outfile.getline(data, 5000, '^');
				  cout << data;
				  cin >> num1;
				  outfile.getline(data, 5000, '^');
				  cout << data;
				  cin >> num2;

				  BasicEasy E(num1, num2);
				  infile.open("History.txt", ios::app);
				  infile <<endl<< num1;
				  if (ch == 1)
				  {
					  infile << '+' << num2 << endl << E.add()<< endl;
					  cout << "Result is: " << E.add();
				  }
				  else if (ch == 2)
				  {
					  infile << '-' << num2 << endl << E.sub() << endl;
					  cout << "Result is: " << E.sub();
				  }

				  else if (ch == 3)
				  {
					  infile << '*' << num2 << endl << E.mul() << endl;
					  cout << "Result is: " << E.mul();
				  }

				  else if (ch == 4)
				  {
					  infile << '/' << num2 << endl << E.div() << endl;
					  cout << "Result is: " << E.div();
				  }
				  break;
		}
		case '3':
		{
				  int CH3, value,n,p,r;
				  for (int i = 0; i < 5000; i++)
					  data[i] = 0;
				  outfile.open("Filing/Menu3.txt");
				  outfile.getline(data, 5000, EOF);
				  cout << data;
				  outfile.close();
				  cin >> CH3;
				  switch (CH3)
				  {
				  case 1:
				  {
							cout << "Enter a value:"; 
							cin >> value;
							ScientificCalc A(value);
							cout << A.fic();
							break;
				  }
				  case 2:
				  {
							cout << "Enter the value of n:";
							cin >> n;
							cout << "Enter the value of r:";
							cin >> r;
							ScientificCalc b(n, r);
							try{
								cout << b.calcNcr();
							}
							catch (int a)
							{
								if (a == 404)
									cout << "Invalid Inputs";
							}
							infile.open("History.txt", ios::app);
							try
							{
								infile << "n=" << n << "r=" << r << endl << "NcR: " << b.calcNcr() << endl << endl;
							}
							catch (int a)
							{
								if (a == 404)
									cout << " ";
							}
							infile.close();

							break;
				  }
				  case 3:
				  {
							cout << "Enter the value of n:";
							cin >> n;
							cout << "Enter the value of p:";
							cin >> p;
							ScientificCalc b(n, p);
							try{
								cout << b.calcNpr();
							}
							catch (int a)
							{
								if (a == 404)
									cout << "Invalid Inputs";
							}
							infile.open("History.txt", ios::app);
							try{
								infile << "n=" << n << "p=" << p << endl << "NpR: " << b.calcNpr() << endl << endl;
							}
							catch (int a)
							{
								if (a == 404)
									cout << " ";
							}
							infile.close();
							break;
				  }
				  case 4:
				  {
							cout << "Enter the first number: ";
							cin >> n;
							cout << "Enter the second number: ";
							cin >> p;
							ScientificCalc a(n, p);
							cout<<a.gcd(n,p);
							infile.open("History.txt", ios::app);
							infile << n << "," << p << endl << "HCF: " << a.gcd(n,p) << endl << endl;
							infile.close();
							break;
				  }
				  case 5:
				  {
							float num1, num3;
							int num2;
							cout << "Enter the first number";
							cin >> num1;
							cout << "Enter the second number";
							cin >> num2;
							cout << "Enter the third number";
							cin >> num3;
							ScientificCalc a(num1, num2, num3);
							cout<< a.calcPower();
							infile.open("History.txt", ios::app);
							infile << "Num1:" << num1 << "," << "Num2:" << num2 << "," << "Num3:" << num3 << endl<< a.calcPower() << endl << endl;
							infile.close();
							break;
				  }
				  case 6:
				  {
							cout << "Enter a number: ";
							float num;
							cin >> num;
							ScientificCalc Sc(num);
							Sc.display();/*
							infile.open("History.txt", ios::app);
							infile << "Num:" << num << endl <<
								Sc.display() << endl << endl;
							infile.close();*/
							break;
				  }
				  case 7:
				  {
							break;
				  }
				  }
				  break;

		}
		case '4':
		{
				  float angle;
				  for (int i = 0; i < 5000; i++)
					  data[i] = 0;
				  string a;
				  outfile.open("Filing/Menu4.txt");
				  outfile.getline(data, 5000, EOF);
				  cout << data;
				  cin >> ch;
				  if (ch>0 && ch < 14)
				  {
					  cout << "Enter the angle: " << endl;
					  cin >> angle;
				  }
				  else if (ch == 14)
				  {
					  cout << "Enter the value: " << endl;
					  cin >> angle;
				  }
				  else if (ch == 15)
				  {
					  cout << "Enter the value: " << endl;
					  cin >> angle;
				  }
				  else if (ch == 16)
				  {
					  cout << "Enter the value: " << endl;
					  cin >> angle;
				  }
				  AdvancedCalculator S(angle);
				  switch (ch)
				  {
				  case 1:
				  {
							cout << S.rad2deg();
							infile.open("History.txt", ios::app);
							infile << endl << angle << "radians=" << endl << S.rad2deg() <<"degree"<< endl << endl;
							infile.close();
							break;
				  }
				  case 2:
				  {
							cout << S.Sin();
							infile.open("History.txt", ios::app);
							infile << endl << "Sin" << angle << ":" << endl << S.Sin() << endl << endl;
							infile.close();
							break;
				  }
				  case 3:
				  {
							cout << S.Cos();
							infile.open("History.txt", ios::app);
							infile << endl << "Cos" << angle << ":" << endl << S.Cos() << endl << endl;
							infile.close();
							break;
				  }
				  case 4:
				  {
							cout << S.Tan();
							infile.open("History.txt", ios::app);
							infile << endl << "Tan" << angle << ":" << endl << S.Sin() << endl << endl;
							infile.close();
							break;
				  }
				  case 5:
				  {
							cout << S.Sec();
							infile.open("History.txt", ios::app);
							infile << endl << "Sec" << angle << ":" << endl << S.Sec() << endl << endl;
							infile.close();
							break;
				  }
				  case 6:
				  {
							cout << S.Cosecent();
							infile.open("History.txt", ios::app);
							infile << endl << "Cosec" << angle << ":" << endl << S.Cosecent() << endl << endl;
							infile.close();
							break;
				  }
				  case 7:
				  {
							cout << S.Cot();
							infile.open("History.txt", ios::app);
							infile << endl << "Cot" << angle << ":" << endl << S.Cot() << endl << endl;
							infile.close();
							break;
				  }
				  case 8:
				  {
							cout << S.InverseSin();
							infile.open("History.txt", ios::app);
							infile << endl << "Sin-1" << angle << ":" << endl << S.InverseSin() << endl << endl;
							infile.close();
							break;
				  }
				  case 9:
				  {
							cout << S.InverseCos();
							infile.open("History.txt", ios::app);
							infile << endl << "Cos-1" << angle << ":" << endl << S.InverseCos() << endl << endl;
							infile.close();
							break;
				  }
				  case 10:
				  {
							 cout << S.InverseTan();
							 infile.open("History.txt", ios::app);
							 infile << endl << "Tan-1" << angle << ":" << endl << S.InverseTan() << endl << endl;
							 infile.close();
							 break;
				  }
				  case 11:
				  {
							 cout << S.HyperbolicSin();
							 infile.open("History.txt", ios::app);
							 infile << endl << "Sinh" << angle << ":" << endl << S.HyperbolicSin() << endl << endl;
							 infile.close();
							 break;
				  }
				  case 12:
				  {
							 cout << S.HyperbolicCos();
							 infile.open("History.txt", ios::app);
							 infile << endl << "Cosh" << angle << ":" << endl << S.HyperbolicCos() << endl << endl;
							 infile.close();
							 break;
				  }
				  case 13:
				  {
							 cout << S.HyperbolicTan();
							 infile.open("History.txt", ios::app);
							 infile << endl << "Tanh" << angle << ":" << endl << S.HyperbolicTan() << endl << endl;
							 infile.close();
							 break;

				  }
				  case 14:
				  {
							 cout << S.Log();
							 infile.open("History.txt", ios::app);
							 infile << endl << "Log" << angle << ":" << endl << S.Log() << endl << endl;
							 infile.close();
							 break;
				  }
				  case 15:
				  {
							 cout << S.Ln();
							 infile.open("History.txt", ios::app);
							 infile << endl << "Ln" << angle << ":" << endl << S.Ln() << endl << endl;
							 infile.close();
							 break;
				  }
				  case 16:
				  {
							 cout << S.ex();
							 infile.open("History.txt", ios::app);
							 infile << endl << "e^" << angle << ":" << endl << S.ex() << endl << endl;
							 infile.close();
							 break;
				  }
				  case 17:
				  {
							 break;
							 break;
				  }
				  }
		}
		case '5':
		{
				  for (int i = 0; i < 5000; i++)
						data[i] = 0;
				  outfile.open("History.txt");
				  outfile.getline(data, 5000, EOF);
				  outfile.close();
				  cout << data;
				  cout << "\nPRESS ANY KEY TO CONTINUE";
				  _getch();
				  break;

		}
		case '6':
		{
				  
				  for (int i = 0; i < 5000; i++)
					  data[i] = 0;
				  outfile.open("Filing/Menu5.txt");
				  outfile.getline(data, 5000, EOF);
				  outfile.close();
				  cout << data; 
				  _getch();
				  break;
		}
		case '7':
		{
				  break;
				  break;
				  break;
		}
		default:
		{
				   cout << "INVALID INPUT"<<endl;
				   m1 = '7';
				   break;
		}
		}

		if (m1 == '7')
			break;
		else
			continue;
		

	}
}Calculator::~Calculator()
{
}