#include <iostream>
using namespace std;
//kuru gıda-> makarna - bakliyat
//kozmetik -> parfum - makyaj
//kasap -> tavuk - dana
//manav -> meyve - sebze
struct kategori
{
	string urunismi;
	int urunadeti;
};
struct reyon
{
	string isim;
	bool aktiflik;
	int urunsayisi;
	kategori* kategoriozellikleri;
};

int main()
{
	reyon a2 = { "kasap",true,200 };
	kategori tavuk = { "tavuk",50 };
	a2.kategoriozellikleri = &tavuk;
	cout << a2.kategoriozellikleri->urunismi << " " << a2.kategoriozellikleri->urunadeti;
	return 0;
}