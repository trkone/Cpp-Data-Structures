#include <iostream>
using namespace std;

class Node
{
public:
	int deg;
	Node *S;
};

void yaz(Node *a)
{
	Node *tut=a;
	int s=1;
	cout<<s<<". "<<tut->deg<<endl;
	tut=tut->S;
	while(tut!=a)
	{ s++;
		cout<<s<<". "<<tut->deg<<endl;
		tut=tut->S;
	}
	cout<<endl;
}

void ekle(Node *a,int b)
{
	Node *tut=a;
	tut=tut->S;
	while(tut->S!=a)
		tut=tut->S;
	tut->S=new Node;
	tut->S->deg=b;
	tut->S->S=a;
}

Node* ekleS(Node *a,int b)
{
	if(a==NULL)
	{
		a=new Node;
		a->S=a;
		a->deg=b;
		return a;
	}
	if(b < a->deg)
	{
		Node *temp=new Node;
		temp->deg=b;
		temp->S=a;
		Node *iter=a;
		
		while(iter->S!=a)
			iter=iter->S;
		
		iter->S=temp;
		
		return temp;
	}
	Node *iter=a;
	
	while(iter->S!=a && iter->S->deg < b)
		iter=iter->S;
	
	Node *temp=new Node;
	temp->S=iter->S;
	iter->S=temp;
	temp->deg=b;
	
	return a;
}

Node *sil(Node *a,int b)
{
	Node *temp;
	Node *iter=a;
	if(a->deg ==b)
	{
		while(iter->S!=a)
			iter=iter->S;
		iter->S=a->S;
		delete a;
		return iter->S;
	}
	while(iter->S!=a && iter->S->deg!=b)
		iter=iter->S;
	
	if(iter->S==a)
	{
		cout<<"Sayi bulunamadi!!"<<endl;
		return a;
	}
	temp=iter->S;
	iter->S=iter->S->S;
	delete temp;
	return a;
}


int main()
{
	Node *root;
	
	root=ekleS(root,200);
	root=ekleS(root,400);
	root=ekleS(root,2);
	root=ekleS(root,20);
	root=ekleS(root,2200);
	
	ekle(root,9923);
	ekle(root,11111);
	
	yaz(root);
	
	root=sil(root,2);
	root=sil(root,2200);
	root=sil(root,7);
	root=sil(root,11111);
	yaz(root);
	
	root=sil(root,400);
	root=sil(root,20);
	
	yaz(root);
	
	return 0;
}
