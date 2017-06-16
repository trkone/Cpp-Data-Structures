#include <iostream>
using namespace std;

#define max 7

class Stack
{
private:
	int Dizi[max];
	int Top;	//dizi içersinde değerlere erişmek için kullanılır.

public:
	Stack();
	bool bosmu();
	bool ekle(int);
	bool sil(int&);
	void Yaz();		// dizinin tüm elemanlarını silip tersten sıralıyacak
};

Stack::Stack()
{
	Top=0;
}

bool Stack::bosmu()
{
	if(Top>=max)
		return false;
		
	return true;
}

bool Stack::ekle(int a)
{
	if(Top>=max)
		return false;
		
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
	int h;
	while(sil(h)!=false)
		cout<<h<<endl;	
}
