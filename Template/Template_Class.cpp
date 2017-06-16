#include <iostream>

using namespace std;

template <typename T>
class Stack
{
private:
	T*	Dates;
	int top;
	int size;
public:
	Stack();
	~Stack();
	void ekle(int a,int b)
	{
		Dates[b]=a;
	}
	void goruntule(int b)
	{
		cout<<Dates[b]<<endl;
	}
	
};

template <typename T>
Stack<T>::Stack()
{
	size=10;
	top=0;
	Dates = new T[size];
}

template <typename T>
Stack<T>::~Stack()
{
	delete[] Dates;
}


int main(int argc, char const *argv[])
{
	Stack <int>a1;

	for(int i=0; i<10; i++)
		a1.ekle(i,i);

	for(int i=0; i<10; i++)
		a1.goruntule(i);


	return 0;
}
