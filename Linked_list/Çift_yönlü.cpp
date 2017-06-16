#include <iostream>
using namespace std;

class Node
{
public:
	Node *S,*O;
	int deg;
};

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
		a->O=temp;
		return temp;
	}
	Node *iter=a;
	while(iter->S!=NULL && b < iter->S->deg)
		iter=iter->S;
	
	Node *temp=new Node;
	temp->deg=b;

	temp->S=iter->S;
	iter->S=temp;
	if(temp->S!=NULL)
		temp->S->O=temp;
	return a;
}

void Yaz(Node *a)
{
	Node *iter=a;
	while(iter!=NULL)
	{
		cout<<iter->deg<<endl;
		iter=iter->S;
	}
}

Node *sil(Node *a,int b)
{
	Node *temp;
	Node *iter=a;
	if(a->deg ==b)
	{
		iter=a->S;
		delete a;
		iter->S->O=NULL;
		return iter;
	}
	while(iter->S!=NULL && iter->S->deg!=b)
		iter=iter->S;
	
	if(iter->S==NULL)
	{
		cout<<"Sayi bulunamadi!!"<<endl;
		return a;
	}
	temp=iter->S;
	iter->S=iter->S->S;
	delete temp;
	if(iter->S!=NULL)
		iter->S->O=iter;
	return a;
}

int main()
{
	Node *root;
	root=Sekle(root,25);
	root=Sekle(root,55);
	root=Sekle(root,15);
	root=Sekle(root,995);
	root=Sekle(root,85);
	root=Sekle(root,10);
	root=Sekle(root,5);
	
	Yaz(root);
	
	root=sil(root,55);
	cout<<endl;
	Yaz(root);
	root=sil(root,995);
	cout<<endl;
	Yaz(root);
	root=sil(root,5);
	cout<<endl;
	Yaz(root);
	root=sil(root,25);
	cout<<endl;
	Yaz(root);
	cout<<endl;
	root=sil(root,29);
	return 0;
}
