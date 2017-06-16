#include <iostream>
using namespace std;


class Stack
{
private:
	unsigned int dizimax;
	int *Dizi;
	unsigned int Top;

public:
	Stack(unsigned int);
	~Stack();
	bool ekle(int);
	bool sil(int&);
	void ayir(unsigned int);
	void Yaz();
};

Stack::Stack(unsigned int a=10)
{
	dizimax=a;
	Top=0;
	Dizi=new int[a];
}
Stack::~Stack()
{
	delete [] Dizi;
}

void Stack::ayir(unsigned int a=5)
{
	int *ddizi=new int[dizimax+a];
	
		
	for(int s=0; s<dizimax; s++)
		ddizi[s]=Dizi[s];
	
	delete [] Dizi;
	Dizi=ddizi;
	
	dizimax+=a;
}

bool Stack::ekle(int a)
{
	if(Top>=dizimax)
		ayir();
	
	Dizi[Top]=a;
	
	Top++;
	
	
	
	return true;
}

bool Stack::sil(int &c)
{
	if(Top<=0)
		return false;
	
	Top--;
	c=Dizi[Top];
	
	
	return true;
}
void Stack::Yaz()
{
	int s;
	while(sil(s)!=false)
		cout<<s<<endl;
}
