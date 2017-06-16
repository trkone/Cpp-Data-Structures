#include <iostream>
using namespace  std;

static int deb=0;

void space(int a)
{
	for(int i=1; i<=a; i++)
		cout<<" ";
}

int yaz_2(int b,int c)
{
	space(b);
	cout<<"$";
	space(c+c-1);
	cout<<"$"<<endl;
	c++;
	if(b==0)
		return 0;

	return yaz_2(b-1,c);
}

int yaz(int a)
{
	space(deb);
	cout<<"$";
	space(a+a-1);
	cout<<"$";
	deb++;
	cout<<endl;

	if(a==1)
	{	space(deb);
		cout<<"$"<<endl;
		deb--;
		return yaz_2(deb,a);
	}
	return yaz(a-1);
}

int main()
{
	int h;
	cout<<"Bir sayi giriniz=";
	cin>>h;
	yaz(h);

	return 0;
}