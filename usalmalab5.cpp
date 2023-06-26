#include <iostream>
using namespace std;
int main()
{
    int a, b, sonuc;
    cout << "taban girin:" << endl;
    cin >> a;
    cout << "üs girin:" << endl;
    cin >> b;
    sonuc = usalma(a, b);
    cout << "sonuc:" << sonuc << endl;
    return 0;
}
int usalma(int a, int b)
{
    if (b == 0) {
        return 1;
    }
    return a * usalma(a, b);
}
