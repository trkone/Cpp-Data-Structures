#include "BST.hpp"
#include <iostream>
using namespace std;

BST::BST(int a)
{
	deg=a;
	pSag=pSol=NULL;
}

void BST::ekle(int a)
{
	if(deg>a)
	{
		if(pSol)
			return pSol->ekle(a);
		
		BST *temp=new BST(a);
		pSol=temp;
		
	}
	else if(deg<a)
	{
		if(pSag)
			return pSag->ekle(a);

		BST *temp=new BST(a);
		pSag=temp;
	}
	
}

BST* BST::ara(int a)
{
	if(deg>a)
	{
		if(pSol)
			return pSol->ara(a);
		else
			return NULL;
	}
	else if(deg<a)
	{
		if(pSag)
			return pSag->ara(a);
		else
			return NULL;
	}

	return this;
}

void BST::cikar(int a,BST *b)
{
	if(deg>a)
	{
		if(pSol)
			return pSol->cikar(a,this);
		else
			return;
	}
	else if(deg<a)
	{
		if(pSag)
			return pSag->cikar(a,this);
		else
			return;
	}

	if(pSag==NULL && pSol==NULL)
	{
		if(b->pSag==this)
			b->pSag=NULL;
		else
			b->pSol=NULL;
	}
	else if(pSag&&pSol)
	{
		deg=pSag->MinUp();
		return pSag->cikar(deg,this);
	}
	else if(pSag)
	{
		 if(b->pSag==this)
                        b->pSag=pSag;
                 else
                         b->pSol=pSag;

	}
	else
	{
		if(b->pSag==this)
			b->pSag=pSol;
		else
			b->pSol=pSol;	
	}

	delete this;
}

int BST::MinUp()
{
	if(pSol)
		return pSol->MinUp();

	return deg;
}
