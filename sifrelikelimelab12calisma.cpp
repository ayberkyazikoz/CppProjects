#include <iostream>
using namespace std;
void kaydirma(char kelime[], int miktar)
{
	char sifrelikelime[100];
	for (int i = 0; i < 100; i++)
	{
		int(elikelime[i])=(kelime[i])+ miktar;
	}
	cout << sifrelikelime;
}
int main()
{
	char kelime[100];
	int miktar;
	cout << "Kelime giriniz:" << endl;
	for (int i = 0; i < 100; i++)
	{
		cin >> kelime[i];
	}
	cout << "kaydirma miktari giriniz :" << endl;
	cin >> miktar;
	kaydirma(kelime, miktar);
}