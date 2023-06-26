#include <iostream>
using namespace std;
class ogrenci
{
private:
	string isim;
	int numara;
	//ENCAPSULATİON - KAPSÜLLEME YÖNTEMİ -->> Objenin özelliklerinin değişimini kontrol altına alma
public:
	void ozelliklerigoster()
	{
		cout << isim << " " << numara << endl;
	}
	void setisim(string yazilacakisim)
	{
		if (yazilacakisim.size() >= 3)
		{
			isim = yazilacakisim;
		}
		else
		{
			cout << "Lutfen 2 harften fazla deger giriniz" << endl;
		}

	}
	void setnumara(int yazilacaknumara)
	{
		if (yazilacaknumara > 0)
		{
			numara = yazilacaknumara;
		}
		else
		{
			cout << "Lutfen 0 dan buyuk deger giriniz." << endl;
		}
	}
	string getisim()
	{
		return isim;
	}
	int getnumara()
	{
		return numara;
	}


};
int main()
{
	ogrenci* ogr1 = new ogrenci();
	

	return 0;
}