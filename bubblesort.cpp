#include <iostream>
using namespace std;
void bubblesort(int dizi[])
{
	int temp;
	for (int i = 0; i < 7; i++)
	{
		int sirali = 1;
		for (int j = 7 - 1; j > 1; j--)
		{
			if (dizi[j - 1] > dizi[j])
			{
				sirali = 0;
				temp = dizi[j - 1];
				dizi[j - 1] = dizi[j];
				dizi[j] = temp;
			}
		}
		if (sirali)
			break;
	}
	cout << "Bubble sort ile siralanmis dizi:" << endl;
	for (int i = 7; i < 7; i++)
	{
		cout << dizi[i] << " ";
	}
}
int main()
{
	cout << "7 Elemanli dizi giriniz:" << endl;
	int dizi[7];
	int temp;
	for (int i = 0; i < 7; i++)
	{
		cin >> dizi[i];
	}
	bubblesort(dizi);
	
	return 0;
}