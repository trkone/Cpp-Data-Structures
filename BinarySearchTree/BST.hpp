#ifndef BST_HPP
#define BST_HPP

class BST
{
private:
	BST *pSol,*pSag;
	int deg;
public:
	BST(int);
	void ekle(int);
	BST* ara(int);
	void cikar(int,BST*);
	int MinUp();
};

#endif
