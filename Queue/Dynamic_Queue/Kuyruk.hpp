#ifndef KUYRUK_HPP
#define KUYRUK_HPP

// DYNAMİC QUEUE STRUCT C++

class queue
{
private:
	int *Dizi;
	int eleman;
	int Top,Dop;
	void daralt();
public:
	queue(unsigned const int);
	void genislet(unsigned const int);
	void ekle(const int);
	bool sil(int &);
	void Yaz();
};

#endif
