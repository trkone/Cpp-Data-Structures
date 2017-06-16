#include <iostream>
using namespace std;

class Node
{
public:
	int deg;
	Node *S;	//BİR SONRAKİ
};

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
	
	cout<<tut->deg<<endl
	<<tut->S->deg<<endl
	<<tut->S->S->deg<<endl
	<<tut->S->S->S->deg<<endl
	<<endl;
	
	tut=tut->S->S;
	
	cout<<tut->deg<<endl;
	
	
	return 0;
}
