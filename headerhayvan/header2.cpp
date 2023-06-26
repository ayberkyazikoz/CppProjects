#include <iostream>
#include "hayvan.h"
using namespace std;
int main()
{
	hayvan hayvan1;
	hayvan1.isim = "josi";
	hayvan1.sinif = "kopek";
	hayvan1.tur = "sosis";
	hayvan1.yas = 4;
	hayvan1.ozelliklerinisoyle();
	return 0;
}
