#include <iostream>
using namespace std;
void degistir(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int sayi1, sayi2;
	cout << "2 sayi giriniz:";
	cin >> sayi1 >> sayi2;
	cout << sayi1 << " " << sayi2;
	degistir(&sayi1, &sayi2);
	cout << sayi1 << " " << sayi2;
	return 0;
}