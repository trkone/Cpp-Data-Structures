#include <iostream>
using namespace  std;

int yazdir(int a)
{
	cout<<a<<" ";
	if(a==0)
		return 0;

	return a-yazdir(a-1);
}

int main()
{
	yazdir(9);
	return 0;
}