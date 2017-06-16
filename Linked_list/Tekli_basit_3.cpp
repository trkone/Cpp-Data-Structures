#include <iostream>
using namespace std;

class Node
{
public:
	int deg;
	Node *S;
};

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
	ekle(root,213);
	ekle(root,683);
	ekle(root,763);
	ekle(root,803);
	
	yaz(root);
	
	return 0;
}
