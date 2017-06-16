#include <iostream>
using namespace std;

#define max 10

template <typename DEG>
class Stack
{
private:
	DEG Dizi[max];
	int top;

public:
	Stack();
	bool ekle(DEG);
	bool sil(DEG&);
	void Yaz();
};

template <typename DEG>
Stack<DEG>::Stack()
{
	top=0;
}

template <typename DEG>
bool Stack<DEG>::ekle(DEG a)
{
	if(top>=max)
		return false;
	
	Dizi[top]=a;
	
	top++;
	
	return true;	
}

template <typename DEG>
bool Stack<DEG>::sil(DEG &c)
{
	if(top<=0)
		return false;
	
	top--;
	
	c=Dizi[top];
	
	return true;
}

template <typename DEG>
void Stack<DEG>::Yaz()
{
	DEG h;
	while(sil(h)!=false)
		cout<<h<<endl;
}
