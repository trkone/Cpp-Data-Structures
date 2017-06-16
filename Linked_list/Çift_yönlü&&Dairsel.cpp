#include <iostream>
using namespace std;

class Node
{
public:
	Node *S,*O;
	int deg;
};

Node *ekle(Node *a,int b)
{
	if(a==NULL)
	{
		a=new Node;
		a->deg=b;
		a->O=a;
		a->S=a;
		return a;
	}
	if(a->S==a)
	{
		Node *temp=new Node;
		temp->deg=b;
		temp->S=a;
		temp->O=a;
		a->S=temp;
		a->O=temp;
		return a;
	}
	Node *iter=a->O;
	Node *temp=new Node;
	temp->deg=b;
	temp->O=a->O;
	temp->S=a;
	a->O=temp;
	iter->S=temp;
	return a;
}

void dYaz(Node *r)
{
	Node *iter=r;
	do
	{
		cout<<iter->deg<<endl;
		iter=iter->S;
	}while(iter!=r);
}

void tYaz(Node *r)
{
	Node *iter=r;
	do
	{
		iter=iter->O;
		cout<<iter->deg<<endl;
	}while(iter!=r);
}

Node *ekleSirali(Node *a,int b)
{
	if(a==NULL)
	{
		a=new Node;
		a->deg=b;
		a->S=a;
		a->O=a;
		return a;
	}
	if(a->O->deg > b)
	{
		Node *temp=new Node;
		temp->deg=b;
		
		a->O->S=temp;
		temp->O=a->O;
		temp->S=a;
		a->O=temp;
		return a;
		
	}
	if(b > a->deg)
	{
		Node *temp=new Node;
		temp->deg=b;
		
		temp->S=a;
		temp->O=a->O;
		a->O->S=temp;
		a->O=temp;
		
		return temp;
	}
	Node *iter=a;
	
	while(iter->S != a && iter->S->deg > b)
		iter=iter->S;
	
	Node *temp=new Node;
	temp->deg=b;
	temp->S=iter->S;
	iter->S->O=temp;
	iter->S=temp;
	temp->O=iter;
	
	return a;
}

Node *sil(Node *a,int b)
{
	if(a->deg == b)
	{
		Node *iter=a->O;
		Node *temp=a;
		iter->S=a->S;
		a->S->O=iter;
		a=a->S;
		delete temp;
		
		return a;
	}
	
	if(a->O->deg == b)
	{
		Node *iter=a->O->O;
		Node *temp=a->O;
		iter->S=a;
		a->O=iter;
		delete temp;
		
		return a;
	}
	
	Node *iter=a;
	while(iter->S!=a && iter->S->deg!=b)
		iter=iter->S;
	
	Node *temp=iter->S;
	
	iter->S->S->O=iter;
	iter->S=iter->S->S;
	delete temp;
	
	return a;
}


int main()
{
	Node *root=NULL;
	
	root=ekle(root,215);
	root=ekle(root,220);
	root=ekle(root,20);
	root=ekle(root,50);
	root=ekle(root,2240);
	root=ekle(root,2220);
	
	dYaz(root);
	cout<<endl;
	tYaz(root);
	
	cout<<"\n----------------\n\n";
	
	root=sil(root,215);
	root=sil(root,50);
	root=sil(root,20);
	root=sil(root,2220);
	
 	dYaz(root);
 	cout<<endl;
 	tYaz(root);
 	
 	
 	
	
	return 0;
}
