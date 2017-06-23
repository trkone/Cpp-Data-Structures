#include "Kuyruk.hpp"

int main()
{
	queue a1(5);

	a1.ekle(6);
	a1.ekle(9);
	a1.ekle(5);
	a1.ekle(67);
	a1.ekle(1);
	a1.ekle(89);
	a1.ekle(34);
	a1.ekle(67);
	a1.ekle(9);
	a1.ekle(4);
	a1.ekle(8);
	
	int h;
	a1.sil(h);
	a1.sil(h);
	a1.sil(h);
	a1.sil(h);
	a1.sil(h);
	a1.sil(h);
	a1.sil(h);
	a1.Yaz();
 	

	a1.ekle(7);
	a1.ekle(10);
	a1.ekle(12);
	a1.ekle(56);
	a1.ekle(99);

	a1.Yaz();
	
	return 0;
}
