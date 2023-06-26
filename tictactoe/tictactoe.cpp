#include <iostream>
#include "tictactoe.h"
using namespace std;

int main()
{
	int numara;
	int satirdegeri, sutundegeri;
	cout << "oyuncu numaranizi seciniz (sadece 1 ve 2)" << endl;
	a1:
	cin >> numara;
	for (numara; numara < 10; numara++)
	{
		if (numara % 2 == 1)
		{
			cout << "1 koymak istediginiz satir ve sutunu yaziniz.";
		a2:
			cin >> satirdegeri >> sutundegeri;
			if (satirdegeri - 1 >= 0 && satirdegeri - 1 < 2 && sutundegeri - 1 >= 0 && sutundegeri - 1 < 2)
			{
				oyunhareketi(satirdegeri - 1, sutundegeri - 1, 1);
				if (kontrol() == 1)
				{
					break;
				}
				
			}
			else
			{
				cout << "Yanlis sutun ve ya sati degeri girdiniz. Lutfen tekrar giriniz:";
				goto a2;
			}
		}
		else if (numara%2==0)
		{
			cout << "2 koymak istediginiz satir ve sutunu yaziniz.";
		a3:
			cin >> satirdegeri >> sutundegeri;
			if (satirdegeri - 1 >= 0 && satirdegeri - 1 < 2 && sutundegeri - 1 >= 0 && sutundegeri - 1 < 2)
			{
				oyunhareketi(satirdegeri - 1, sutundegeri - 1, 2);
				if (kontrol() == 1)
				{
					break;
				}
			}
			else
			{
				cout << "Yanlis sutun ve ya satir degeri girdiniz. Lutfen tekrar giriniz:";
				goto a3;
			}
		}
		else
		{
			cout << "Lutfen tekrar giriniz...";
			goto a1;
		}
	}
	return 0;
}