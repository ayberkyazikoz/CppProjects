#ifndef tictactoe_h
#define tictactoe_h
using namespace std;

class tictactoe
{
public:
	static int matris[3][3];
	void matrisatama();
	void oyunhareketi(unsigned int satir,unsigned int sutun,unsigned int x);
	void kontrol();
};
void matrisatama()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			tictactoe::matris[i][j] = 0;
		}
	}
}
void oyunhareketi(unsigned int satir, unsigned int sutun,unsigned int x)
{
	tictactoe::matris[satir][sutun] = x;
}
int kontrol()
{
	if (tictactoe::matris[0][0] == tictactoe::matris[0][1] == tictactoe::matris[0][2]==1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][0] == tictactoe::matris[0][1] == tictactoe::matris[0][2] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[1][0] == tictactoe::matris[1][1] == tictactoe::matris[1][2] == 1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[1][0] == tictactoe::matris[1][1] == tictactoe::matris[1][2] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[2][0] == tictactoe::matris[2][1] == tictactoe::matris[2][2] == 1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[2][0] == tictactoe::matris[2][1] == tictactoe::matris[2][2] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][0] == tictactoe::matris[1][0] == tictactoe::matris[2][0] == 1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][0] == tictactoe::matris[1][0] == tictactoe::matris[2][0] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][1] == tictactoe::matris[1][1] == tictactoe::matris[2][1] == 1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][1] == tictactoe::matris[1][1] == tictactoe::matris[2][1] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][2] == tictactoe::matris[1][2] == tictactoe::matris[2][2] == 1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][2] == tictactoe::matris[1][2] == tictactoe::matris[2][2] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][0] == tictactoe::matris[1][1] == tictactoe::matris[2][2] == 1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][0] == tictactoe::matris[1][1] == tictactoe::matris[2][2] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][2] == tictactoe::matris[1][1] == tictactoe::matris[2][0] == 1)
	{
		cout << "1.oyuncu kazandi.";
		return 1;
	}
	else if (tictactoe::matris[0][2] == tictactoe::matris[1][1] == tictactoe::matris[2][0] == 2)
	{
		cout << "2.oyuncu kazandi.";
		return 1;
	}
	

}
#endif 