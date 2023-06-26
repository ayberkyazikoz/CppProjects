#include <iostream>
using namespace std;
class tarih
{
private:
	int gun;
	int ay;
	int yil;

public:
	tarih(int g, int a, int y)
	{
		gun = g;
		ay = a;
		yil = y;
	}
	void tarihigoster()
	{
		cout << gun << "/" << ay << "/" << yil << endl;
	}
};
class insan
{
private:
	string isim;
	tarih dogumtarihi;

public:
	insan(string yazilacakisim, tarih yazilacakdt):isim(yazilacakisim),dogumtarihi(yazilacakdt){}
	void bilgilerigoster()
	{
		cout << isim << " isimli kisinin dogum tarihi:";
		dogumtarihi.tarihigoster();
	}
};
int main()
{
	tarih dogumtarihi(6, 7, 2002);
	insan i1("ayberk", dogumtarihi);
	i1.bilgilerigoster();
}