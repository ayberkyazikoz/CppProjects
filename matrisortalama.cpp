#include <iostream>
using namespace std;
void kucuksiralama(double x[], int n);
void buyuksiralama(double x[], int n);
int main()
{
	double matris[3][4] = { {500,800,900,1300},{246,885,197,191},{547,665,13,22} };
	double toplam=0, ortalama;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			toplam = toplam + matris[i][j];
		}
	}
	ortalama = toplam / 12;
	cout <<"Ortalama:"<< ortalama<<endl;
	double ortalamadankucuk[12];
	double ortalamadanbuyuk[12];
	int a=0, b=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (matris[i][j] < ortalama)
			{
				ortalamadankucuk[a] = matris[i][j];
				a++;
			}
			else if (matris[i][j] >= ortalama)
			{
				ortalamadanbuyuk[b] = matris[i][j];
				b++;
			}
		}
	}
	kucuksiralama(ortalamadankucuk, a);
	cout << endl;
	buyuksiralama(ortalamadanbuyuk, b);
	cout << "Ortalamadan kucuk olan elemanlarin artan siralamasi:";
	for (int i = 0; i < a; i++)
	{
		cout << ortalamadankucuk[i] << " ";
	}
	cout << endl;
	cout << "Ortalamadan buyuk olan elemanlarin azalan siralamasi:";
	for (int i = 0; i < b;i++)
	{
		cout << ortalamadanbuyuk[i] << " ";
	}
	cout << endl;
	return 0;
}
void kucuksiralama(double x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (x[i] < x[j])
			{
				double temp;
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	
}
void buyuksiralama(double y[], int a)
{
	
	for (int i = 0; i < a; i++)
	{
		for (int j =0; j < a; j++)
		{
			if (y[i] > y[j])
			{
				double temp;
				temp = y[i];
				y[i] = y[j];
				y[j] = temp;
			}
		}
	}
	
}