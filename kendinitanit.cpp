#include <iostream>
using namespace std;
int main()
{
    char ayberk[] = { 'a','y','b','e','r','k','\0' };
    char kendinitanit[1000];
    string alinansifre;
    cout << "Sifrenizi giriniz:";
t1:
    cin >> alinansifre;
    if (alinansifre == ayberk)
    {
        cout << "Merhaba. Kendinizi tanitin ve bitirdikten sonra * enter yapin:" << endl;
        cin.get(kendinitanit, 1000, '*');
        cout << "Seni tanidim. Sen:" << kendinitanit << endl << "Gorusuruz";
    }
    else
    {
        cout << "Girdiginiz sifre yanlis. Lutfen tekrar giriniz..";
        goto t1;
    }
}