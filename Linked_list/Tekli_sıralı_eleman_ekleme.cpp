#include <iostream>
using namespace std;

class Node
{
public:
	int deg;
	Node *S;
};

void yaz(Node*);
Node *Sekle(Node *a,int b)
{
	if(a==NULL)
	{
		a=new Node;
		a->deg=b;
		return a;
	}
	if(b >= a->deg)
	{
		Node *temp=new Node;
		temp->deg=b;
		temp->S=a;
		return temp;
	}
	Node *iter=a;
	while(iter->S!=NULL && b < iter->S->deg)
	iter=iter->S;
	Node *temp=new Node;
	temp->deg=b;

	temp->S=iter->S;
	iter->S=temp;
	return a;
}



int main()
{
	Node *root;
	root=Sekle(root,20);
	root=Sekle(root,30);
	root=Sekle(root,90);
	root=Sekle(root,900);
	root=Sekle(root,230);
	root=Sekle(root,120);
	root=Sekle(root,1110);
	root=Sekle(root,1);
	root=Sekle(root,1);
		
	yaz(root);
	return 0;
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
