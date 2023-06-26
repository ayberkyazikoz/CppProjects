#include <iostream>
#include <cmath>
using namespace std;
int kuphesapla(int sayi);
int main()
{
	int sayi;
	cout << "Sayi giriniz:";
	cin >> sayi;
	cout << "Sayinizin kupu:" << kuphesapla(sayi) << endl;

}
int kuphesapla(int sayi)
{
	return pow(sayi, 3);
}