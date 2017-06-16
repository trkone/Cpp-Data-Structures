#include <iostream>
using namespace std;

#define Topla(x,y) x+y

template<typename S>
S carp(S a,S b)
{
	return a*b;
}


int main()
{
	cout<<Topla(2.1,5.3)<<endl;

	cout<<carp(3,4)<<endl;

	return 0;
}