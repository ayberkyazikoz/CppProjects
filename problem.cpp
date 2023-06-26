#include <iostream>
using namespace std;
int main()
{
	int n;
	int counter = 0;
	cout << "Enter the first number of sequence" << endl;
	cin >> n;
	cout << n;
	a1:
	while (counter < 3)
	{
		if (n == 1 )
		{
			counter++;
		}
		
		if (n % 2 == 0)
		{
			cout << "	";
			n = n / 2;
			cout << n;
		}
		else if (n % 2 == 1)
		{
			if (counter == 3)
			{
				continue;
			}
			cout << "	";
			n = 3 * n + 1;
			cout << n;
		}

	}
	
	cout << " ...";
	return 0;
}