#include <iostream>
using namespace std;
class quadratic
{
private:
	double a;
	double b;
	double c;
	char variable = 'x';
public:
	quadratic(double seta, double setb, double setc)
	{
		if (seta == 0)
		{
			a = 1;
		}
		else
		{
			a = seta;
		}
		b = setb;
		c = setc;
	}
	void fonksiyonlaritopla(quadratic denklem1,quadratic denklem2,quadratic denklemtoplami)
	{
		denklemtoplami.a = denklem1.a + denklem2.a;
		denklemtoplami.b = denklem1.b + denklem2.b;
		denklemtoplami.c = denklem1.c + denklem2.c;
		cout << "toplanan denklem: " << denklemtoplami.a * variable * variable << "+" << denklemtoplami.b * variable << "+" << denklemtoplami.c << endl;
	}
};

int main()
{
	quadratic denklem1(1, 0, 0);
	quadratic denklem2(2, 1, 1);
	quadratic denklemtoplami(0,0,0);
	denklem1.fonksiyonlaritopla(denklem1, denklem2, denklemtoplami);
	return 0;
}