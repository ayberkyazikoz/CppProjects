#include <iostream>
using namespace std;
namespace matematikselislemler
{
	float PI = 3.14;
	int toplama(int x,int y)
	{
		return x + y;
	}
	float daireninalaninihesapla(int yaricap)
	{
		return PI * yaricap * yaricap;
	}
	float kupunhacminihesapla(int ayrituzunlugu)
	{
		return ayrituzunlugu * ayrituzunlugu * ayrituzunlugu;
	}
}
int main()
{
	int sayi1 = 15;
	int sayi2 = 30;
	{
		int sayi1 = 20;
		sayi2 = 50;
		cout << sayi1 << endl;
		cout << sayi2 << endl;
	}
	cout << sayi1 << endl;
	cout << sayi2 << endl;
	return 0;
}