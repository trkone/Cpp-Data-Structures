#include <iostream>
using namespace std;

template <typename A>
class Stack
{
private:
	int Top;
	int max;
	A *Dizi;
public:
	Stack(unsigned int a=10);
	~Stack();
	bool ekle(A);
	bool sil(A&);
	void Genislet(unsigned int a=10);
	void Yaz();
};

template <typename A>
Stack<A>::Stack(unsigned int a)
{
	max=a;
	Top=0;
	Dizi=new A[a];
}

template <typename A>
Stack<A>::~Stack()
{
	delete [] Dizi;
}

template <typename A>
void Stack<A>::Genislet(unsigned int a)
{
	A *dizi=new A[max+a];
	for(int s=0; s<max; s++)
		dizi[s]=Dizi[s];
	
	delete[] Dizi;	
	Dizi=dizi;
	max+=a;
}

template <typename A>
bool Stack<A>::ekle(A a)
{
	if(Top>=max)
		Genislet();
	
	Dizi[Top]=a;
	Top++;
	
	return true;
}

template <typename A>
bool Stack<A>::sil(A &c)
{
	if(Top<=0)
		return false;
	
	Top--;
	c=Dizi[Top];
	
	return true;
}

template <typename A>
void Stack<A>::Yaz()
{
	A h;
	while(sil(h)!=false)
		cout<<h<<endl;
}
