#include <iostream>
#include "BST.hpp"
using namespace std;

int main()
{
	BST *root=new BST(15);

	root->ekle(12);
	root->ekle(18);
	root->ekle(9);
	root->ekle(13);
	root->ekle(3);
	root->ekle(10);
	root->ekle(14);

	root->ekle(17);
	root->ekle(30);
	root->ekle(16);
	root->ekle(22);
	root->ekle(35);


       	root->cikar(18,NULL);

	BST *temp=root->ara(22);
        cout<<temp->MinUp()<<endl;
	
	temp->cikar(17,NULL);

	cout<<temp->MinUp()<<endl;
	
	BST* temp2=root->ara(13);

	cout<<temp2->MinUp()<<endl;


	BST *temp3=root->ara(12);

	temp3->cikar(13,NULL);

	BST* hata=root->ara(14);

	cout<<hata->MinUp();
	

	return 0;
}
