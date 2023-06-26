#include <iostream>
using namespace std;
class ogrenci
{
private:
	string isim;
	int numara;

public:
	ogrenci();
	void bilgileriguncelle(string isim, int numara)
	{
		this->isim = isim;
		this->numara = numara;
	}
	void setisim(string yazilacakisim)
	{
		isim = yazilacakisim;
	}
	void setnumara(int yazilacaknumara)
	{
		numara = yazilacaknumara;
	}
	string getisim()
	{
		return isim;
	}
	int getnumara()
	{
		return numara;
	}
	void ogrencibilgilerinigoster()
	{
		cout << isim << " " << numara << endl;
	}
};
ogrenci::ogrenci()
{
	this->isim = "null";
	this->numara = 0;
}
int main()
{
	ogrenci ogr1;
	ogr1.bilgileriguncelle("ayberk", 2021);
	ogr1.ogrencibilgilerinigoster();
	return 0;
}