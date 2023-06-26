#include <iostream>
using namespace std;
int main()
{
	int matris[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			matris[i][j]=rand() % 10;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
}