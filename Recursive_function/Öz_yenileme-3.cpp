#include <iostream>
using namespace  std;

void ters_Yaz(char *a,int uz)
{
	if(uz==0)
		return;

	cout<<a[uz-1];
	ters_Yaz(a,uz-1);
}

int main(int argc, char const *argv[])
{
	char a[]="Good By WORLD!!";
	ters_Yaz(a,sizeof(a)/sizeof(char));
	return 0;
}