#include <iostream>
using namespace std;

class Node
{
public:
	int deg;
	Node *S;
};

void aekle(Node *c,int a)
{
	Node *tut=c;
	/*for(int s=0; s<3; s++)
		tut=tut->S;*/
	
	Node *temp=new Node;
	temp->deg=a;
	
	temp->S=tut->S;
	tut->S=temp;
}

void ekle(Node *a1,int c)
{
	Node *a=a1;
	
	while(a->S!=NULL){a=a->S;}
	a->S=new Node;
	a->S->deg=c;
}

void yaz(Node *a1)
{
	Node *g=a1;
	int s=0;
	while(g!=NULL)
	{
		s++;
		cout<<s<<". "<<g->deg<<endl;
		g=g->S;
	}
}

int main()
{
	Node *root=new Node;
	root->deg=1;
	ekle(root,29);
	ekle(root,56);
	ekle(root,98);
	ekle(root,544);
	
	yaz(root);
	cout<<endl<<endl;
	aekle(root,67);
	aekle(root,78);
	
	yaz(root);
	
	return 0;
}
