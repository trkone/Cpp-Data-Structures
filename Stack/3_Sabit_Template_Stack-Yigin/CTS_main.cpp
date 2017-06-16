#include "ConstTStack.hpp"

int main()
{
	Stack<double> a1;
	
	a1.ekle(4.1);
	a1.ekle(86.1);
	a1.ekle(7.3);
	a1.ekle(99.8);
	a1.ekle(90.3);
	a1.ekle(56.9);
	
	a1.Yaz();
	
	Stack<int> a2;
	
	a2.ekle(4);
	a2.ekle(86);
	a2.ekle(7);
	a2.ekle(99);
	a2.ekle(90);
	a2.ekle(56);
	a2.ekle(4);
	a2.ekle(86);
	a2.ekle(7);
	a2.ekle(99);
	a2.ekle(90);
	a2.ekle(56);
	
	cout<<endl<<endl<<endl;
	int c;
	a2.sil(c);
	a2.sil(c);
	
	a2.Yaz();
	
	return 0;
}
