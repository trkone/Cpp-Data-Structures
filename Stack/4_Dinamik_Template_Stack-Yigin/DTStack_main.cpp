#include "DTStack.hpp"

int main()
{
	Stack<string> a1(3);
	
	a1.ekle("Mahmut");
	a1.ekle("Tarik");
	a1.ekle("Erkan");
	
	a1.Yaz();
	
	cout<<"\n\n\n";
	
	
	a1.ekle("Mahmut");
	a1.ekle("Tarik");
	a1.ekle("Erkan");
	a1.ekle("Mahmut");
	a1.ekle("Tarik");
	a1.ekle("Erkan");
	
	a1.Yaz();
	
	cout<<"\n\n\n";
	
	a1.ekle("Mahmut");
	a1.ekle("Tarik");
	a1.ekle("Erkan");
	a1.ekle("Mahmut");
	a1.ekle("Tarik");
	a1.ekle("Erkan");
	
	string c="as";
	a1.sil(c);
	a1.sil(c);
	
	a1.Yaz();
	return 0;
}
