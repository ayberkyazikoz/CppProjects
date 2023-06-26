#include <iostream>
using namespace std;
class kedi
{
public:
	kedi(){}
	~kedi(){
		cout << "silindi";
	}
};
int main()
{
	kedi* kedi1 = new kedi;
	delete kedi1;
}