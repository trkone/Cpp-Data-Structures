#include "Kuyruk.hpp"
#include <iostream>

queue::queue(unsigned const int a)
{
	Dizi=new int[a];
	eleman=a;
	Top=0;
	Dop=0;
}

void queue::genislet(unsigned const int a)
{
	int *Dizi2=new int[eleman+a];
	int temp=Top;
	for(; temp<Dop; temp++)
		Dizi2[temp]=Dizi[temp];
	delete [] Dizi ;
	Dizi=Dizi2;
	eleman+=a;
}

void queue::daralt()
{
	int temp=Dop-Top;

	int *Dizi2=new int[temp];
	
	int a=0;
	for(int s=Top; s<Dop; s++)
	{
		Dizi2[a]=Dizi[s];
		a++;
	}
	
	delete [] Dizi;
	Dizi=Dizi2;
	Top=0;
	Dop=temp;
	eleman=temp;
}

void queue::ekle(const int a)
{
	if(Dop>=eleman)
		genislet(3);
	
	Dizi[Dop]=a;
	Dop++;
}

bool queue::sil(int &a)
{
	if(Top>=Dop)
		return false;

	if(eleman/2<=Top)
		daralt();
	a=Dizi[Top];
	Top++;

	return true;
}

void queue::Yaz()
{
	int temp=Top;
	for(; temp<Dop; temp++)
		std::cout<<Dizi[temp]<<std::endl;
}
