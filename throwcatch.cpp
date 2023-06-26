#include <iostream>
using namespace std;
int main()
{
	int yas;
	cout << "Lutfen yas degeri giriniz:" << endl;
	a1:
	cin >> yas;
	try
	{
		if (yas < 0)
		{
			throw 0;
		}
	}
	catch (int hatakodu)
	{
		cout << "Yas degeri 0'dan kucuk olamaz." << endl << "Lutfen tekrar deneyiniz:";
		goto a1;
	}
	cout << "Yas degeriniz gecerli. Degeriniz: " << yas;
	return 0;
}