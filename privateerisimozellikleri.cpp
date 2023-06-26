#include <iostream>
using namespace std;
class ogrenci
{
public:
	int numara;

private:
	string isim;
};
int main()
{
	ogrenci ogr1;
	ogr1.numara = 2022;
	//ogr1.isim = "ayb"; private oldugu icin erisim saglanamaz. Program hata verir.
	cout << ogr1.numara;
	return 0;
}