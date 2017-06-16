#include <iostream>
using namespace std;

class Node
{
public:
	int deg;
	Node *S;	//BİR SONRAKİ
};

void Yaz(Node *a)
{
	int j=0;
	while(a!=NULL)
	{
		j++;
		cout<<j<<". "<<a->deg<<endl;
		a=a->S;
	}
}

int main()
{
	Node *root=new Node;
	
	root->deg=5;
	
	root->S=new Node;
	root->S->deg=20;
	
	root->S->S=new Node;
	root->S->S->deg=50;
	
	root->S->S->S=new Node;
	root->S->S->S->deg=220;
	
	Node *tut;
	tut=root;
	int s=0;
	while(tut->S!=NULL)
	{
		s++;
		cout<<s<<". "<<tut->deg<<endl;
		tut=tut->S;
	}
	s++;
	cout<<s<<". "<<tut->deg<<endl;
	
	for(int g=0; g<5; g++)
	{
		tut->S=new Node;
		tut=tut->S;
		tut->deg=(g+1)*70;
		cout<<g+5<<". "<<tut->deg<<endl;
	}
	cout<<endl<<endl<<endl;
	Node *hh;
	hh=root;
	Yaz(hh);
	
	return 0;
}
