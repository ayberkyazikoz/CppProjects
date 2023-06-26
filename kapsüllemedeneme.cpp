#include <iostream>
using namespace std;
class ogrenci
{
private:
	string isim;
	int numara;

public:
	void setisim(string setedilecekisim)
	{
		isim = setedilecekisim;
	}
	void setnumara(int setedileceknumara)
	{
		numara = setedileceknumara;
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
	ogrenci ogr1;
	ogr1.setisim("Ayberk");
	ogr1.setnumara(2021);
	cout << ogr1.getisim() << " " << ogr1.getnumara() << endl;
	return 0;
}