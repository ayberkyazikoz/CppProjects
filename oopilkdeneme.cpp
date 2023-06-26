#include <iostream>
using namespace std;
class insan
{
public:
	string isim;
	int yas;
	void isimveyassoyle()
	{
		cout << isim << " " << yas << endl;
	}

};
int main()
{
	insan insan1;
	insan1.isim = "ayberk";
	insan1.yas = 19;

	insan1.isimveyassoyle();
}