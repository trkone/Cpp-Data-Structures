#include <iostream>
using namespace std;


int F(int sayi)
{
	if(sayi==1)
		return 1;

	return sayi*F(sayi-1);
}

int main()
{
	int a=F(6);
	cout<<a<<endl;
}