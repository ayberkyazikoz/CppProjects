#include <iostream>
using namespace std;
int iterativef(int sayi)
{
	int carpim = 1;
	for (int i = 1; i <=sayi; i++)
	{
		carpim *= i;
	}
	return carpim;
}
int recursivef(int sayi)
{
	if (sayi == 0 || sayi == 1)
	{
		return 1;
	}
	else
	{
		return sayi * recursivef(sayi - 1);
	}
}
int main()
{
	int x = iterativef(6);
	int y = recursivef(5);
	cout << x << endl << y << endl;
	return 0;
}