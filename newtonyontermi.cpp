#include <iostream>
using namespace std;
int main()
{
	int dizi[5] = { 20,5,17,4,13 };
	int temp;
	for (int i = 0; i < 4; i + 4)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dizi[i] > dizi[j])
			{
				temp = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		cout << dizi[i] << " ";
	}
	return 0;
}