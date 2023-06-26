#include <iostream>
using namespace std;
class sayi
{
public:
	int deger;
	sayi() {};
	sayi(int s1)
	{
		deger = s1;
	}

	sayi operator+(sayi s2)
	{
		sayi toplam;
		toplam.deger = deger + s2.deger;
		return (toplam);
	}
	sayi operator-(sayi s2)
	{
		sayi toplam;
		toplam.deger = deger - s2.deger;
		return (toplam);
	}
	sayi operator/(sayi s2)
	{
		sayi toplam;
		toplam.deger = deger / s2.deger;
		return (toplam);
	}
	sayi operator*(sayi s2)
	{
		sayi toplam;
		toplam.deger = deger * s2.deger;
		return (toplam);
	}
	sayi operator%(sayi s2)
	{
		sayi toplam;
		toplam.deger = deger % s2.deger;
		return (toplam);
	}
};
int main()
{
	sayi s1(10);
	sayi s2(33);
	sayi s3;

	s3 = s1 + s2;
	cout << s3.deger << endl;
	s3 = s1 - s2;
	cout << s3.deger << endl;
	s3 = s1 / s2;
	cout << s3.deger << endl; 
	s3 = s1 * s2;
	cout << s3.deger << endl;
	s3 = s1 % s2;
	cout << s3.deger << endl;

	return 0;
}