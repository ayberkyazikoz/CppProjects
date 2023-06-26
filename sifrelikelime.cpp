#include <iostream>
using namespace std;
void kaydirma(char kelime[], int miktar)
{
	char sifrelikelime[20] = { a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a };
	for (int i = 0; i < 20; i++)
	{
		int(sifrelikelime[i]) = int(kelime[i]) + miktar;
	}
	cout << sifrelikelime;
}
int main()
{
	char kelime[20];
	int miktar;
	cout << "Kelime giriniz:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> kelime[i];
	}
	cout << "kaydirma miktari giriniz :" << endl;
	cin >> miktar;
	kaydirma(kelime, miktar);
}