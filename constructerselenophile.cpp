#include <iostream>
using namespace std;
class selenophile
{
public:
	selenophile(int yazilacaknumara, string yazilacakisim)
	{
		numara = yazilacaknumara;
		isim = yazilacakisim;
	}

	int numara;
	string isim;
};
int main()
{
	selenophile selen1(33,"selen");
	cout << selen1.numara << " " << selen1.isim;
	return 0;
}
