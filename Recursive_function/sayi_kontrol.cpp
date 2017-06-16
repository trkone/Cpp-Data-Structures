#include <iostream>
using namespace  std;

int yazdir(int a,int b)
{
	cout<<a<<" ";
	if(a==b)
		return 0;

	return a-yazdir(a-1,b);
}

int ters_yaz(int a,int b)
{
	cout<<b<<" ";

	if(b==a)
		return 0;

	return b+ters_yaz(a,b+1);
}

int main()
{
	yazdir(25,5);
	cout<<endl;
	ters_yaz(80,40);
	return 0;
}