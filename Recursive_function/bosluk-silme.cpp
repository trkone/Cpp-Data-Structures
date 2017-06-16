#include <iostream>
using namespace std;

static int a=0;

int bosluk(char *dizi)
{
	if(dizi[a]=='\0')
		return a=0;
	else if(dizi[a]==' ')
		dizi[a]=0;
	

	cout<<dizi[a];

	a++;

	return bosluk(dizi);
}

int yaz(int a,int b)
{

}

int main()
{
	char a[]="tarık abi -:)";
	bosluk(a);

	return 0;
}