#include <iostream>
#include "queue.hpp"
using namespace std;

int main(int argc, char** argv) {
    Queue a1;
	
	a1.ekle(4);
	a1.ekle(2);
	a1.ekle(9);
	a1.ekle(78);
	a1.ekle(36);
	a1.ekle(34);
	a1.ekle(45);
	
	a1.Yaz();
	
	cout<<endl<<endl;
	
	a1.ekle(4);
	a1.ekle(2);
	a1.ekle(9);
	a1.ekle(78);
	a1.ekle(36);
	a1.ekle(34);
	a1.ekle(45);
	a1.ekle(78);
	a1.ekle(36);
	a1.ekle(34);
	a1.ekle(45);
	
	int h;
	a1.sil(h);
	a1.sil(h);
	a1.sil(h);
	a1.sil(h);
	
	a1.ekle(21);
	
	a1.Yaz();
	
	return 0;
    
}


