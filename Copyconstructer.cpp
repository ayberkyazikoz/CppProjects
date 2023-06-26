#include <iostream>
using namespace std;
class toplama
{
private:
	int s1, s2;
public:
	toplama(int sayi1, int sayi2) :s1(sayi1), s2(sayi2)
	{

	}
	toplama(const toplama& kopya) :s1(kopya.s1), s2(kopya.s2)
	{

	}
	void sonuc()
	{
		cout << "Sonuc:" << s1 + s2 << endl;
	}
};
int main()
{
	toplama t1(15, 22);
	toplama t2(t1);

	t1.sonuc();
	t2.sonuc();
	return 0;
}