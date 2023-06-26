#include <iostream>
using namespace std;
struct ogrenci
{
	int numara;
	string isim;
	
};
void ismidegistir(ogrenci* ogr31, string koyulacakisim)
{
	ogr31->isim = koyulacakisim;
}
void ogrenciolustur(ogrenci* ogr31, int numara, string isim)
{
	ogr31->numara = numara;
	ogr31->isim = isim;
}
void ogrenciyiekranabastir(ogrenci ogr31)
{
	cout << ogr31.numara << "	" << ogr31.isim << endl;
}
void ogrenciyisil(ogrenci* ogr31)
{
	ogr31->isim = "";
	ogr31->numara = 0;
}
int main()
{
	
	//ogrenci ogr1;
	//ogr1.isim = "ayberk";
	//cout << ogr1.isim << endl;
	//ismidegistir(&ogr1, "aybüke");
	//cout << ogr1.isim << endl;
	ogrenci ogr2;
	ogrenciolustur(&ogr2, 12345, "furk");
	ogrenciyiekranabastir(ogr2);
	ogrenciyisil(&ogr2);
	ogrenciyiekranabastir(ogr2);
	return 0;
}