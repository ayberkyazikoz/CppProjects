#include <iostream>
using namespace std;
int main() 
{
	int dizi[7] = { 1, 7, 22, 56, 96, 187, 235 };
	int aranan = 235;

	int baslangic = -1;
	int bitis = 7; 
	int i;
	bool kontrol = false;

	while (bitis - baslangic > 1) {
		i = (baslangic + bitis) / 2;
		if (dizi[i] == aranan) {
			kontrol = true;
			cout << aranan << " degeri dizi icerisinde "<<i+1<<". sirada yer almaktadir.";
			break;
		}
		else if (dizi[i] > aranan) {
			bitis = i;
		}
		else if (dizi[i] < aranan) {
			baslangic = i;
		}
	}

	if (kontrol == false) {
		cout << aranan << " degeri dizi icerisinde yoktur.";
	}
	
}