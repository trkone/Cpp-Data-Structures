#include <iostream>
using namespace std;

int U(int a,int b) // Döngu ile
{
	int top=1;

	for(int s=1; s<=b; s++)
	{
		top*=a;
	}

	return top;
}
//////////////////////////////////////////////////////




int URL(int a,int b) // ÖZ YENİLEME ile
{
	cout<<endl<<"URL(\""<<a<<","<<b<<"\")";
	if(b==1){
		cout<<endl<<"Sonuc"<<"=";
		return a;
	}

	return a*URL(a,b-1);
}

int main()
{
	int a=2;

	//cout<<U(2,5)<<endl<<URL(2,5)<<endl;

	cout<<URL(2,5)<<endl;

	return 0;
}