#include <iostream>
using namespace std;

int yaz_2(int n,int i,int j)
{
	if(j==n+1)
		return -1;

	if((i+j)==n+1 || i==j)
		cout<<"#";
	else 
		cout<<" ";

	yaz_2(n,i,j+1);
}

int yaz(int n,int i)
{
	if(i==n+1)
		return -1;

	yaz_2(n,i,1);
	cout<<endl;
	yaz(n,i+1);
}

int main()
{
	yaz(12,1);

	return 0;
}