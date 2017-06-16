#include "ConstStack.h"

int main()
{
	Stack a1;
	
	a1.ekle(20);
	a1.ekle(50);
	a1.ekle(90);
	
	a1.Yaz();
	
	////////////////////////////////////
	
	int g;
	
	a1.ekle(20);
	a1.ekle(50);
	a1.ekle(90);
	
	a1.sil(g);
	a1.sil(g);
	a1.sil(g);
	
	a1.Yaz();
	
	if(a1.bosmu()==true)
		cout<<"Dizi bos"<<endl;
	 else
		cout<<"Dizi dolu"<<endl; 
		
	cout<<endl<<endl<<endl<<endl;
	
	
	a1.ekle(20);
	a1.ekle(50);
	a1.ekle(90);
	a1.ekle(20);
	a1.ekle(50);
	a1.ekle(90);
	a1.ekle(20);
	a1.ekle(50);
	a1.ekle(90);
	
	a1.Yaz();	
	
	return 0;
}
