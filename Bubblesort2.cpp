#include <iostream>
using namespace std;
void exchangesort(int dizi, int x);
int main()
{
	int t[2][6] = { {-7,42,13,-8,-5,2},{6,17,19,43,5,8} };
	int dizi[12], k = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			dizi[k] = t[i][j];
			k++;
		}
	}
	exchangesort(dizi, 12);
	for (int i = 0; i < 12; i++)
	{
		cout << dizi[i] << " ";
	}
}
void exchangesort(int dizi[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (dizi[i] > dizi[j])
			{
				int t;
				t = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = t;
			}
		}
	}
}