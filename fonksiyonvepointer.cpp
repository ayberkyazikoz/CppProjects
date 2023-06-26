#include <iostream>
using namespace std;
void dizidekielemanlaribastir(int *diziadres,int boyut)
{
	for (int i = 0; i < boyut; i++)
	{
		cout << diziadres[i]<<" ";
	}
}
void dizielemanlariniekle(int *diziadres,int boyut, int miktar)
{
	for (int i = 0; i < boyut; i++)
	{
		diziadres[i] = diziadres[i] + miktar;
		cout << diziadres[i];
	}

}
void dizielemanlarinicikart(int* diziadres, int boyut, int miktar)
{
	for (int i = 0; i < boyut; i++)
	{
		diziadres[i] = diziadres[i] - miktar;
		cout << diziadres[i];
	}

}
int main()
{
	int sayilar[] = { 5,10,15,20 };

	dizidekielemanlaribastir(&sayilar[0], 4);
	int miktar;
	bool islem;
	cout << "Elemanlara yapmak istediginiz islem?" << endl;
	cin >> islem;
	cout << "Miktar giriniz:" << endl;
	cin >> miktar;
	if (islem == +)
	{
		dizielemanlariniekle(&sayilar[0], 4, miktar);
	}
	else if (islem == -)
	{
		dizielemanlarinicikart(&sayilar[0], 4, miktar);
	}
}