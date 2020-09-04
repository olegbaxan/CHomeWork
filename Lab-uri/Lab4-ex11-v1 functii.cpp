#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;

int insert()
{
	int x;
	cout<<"\nEnter val=";
	cin>>x;
	return x;
}
void insertP(int P[],int n)
{
	for(int i=0;i<n;i++){
		P[i]=rand()%10-5;
	}
}
void showV(int P[],int n)
{
	for (int i=0;i<n;i++){
		cout<<" "<<P[i];
	}
}
void poz(int P[],int n){
	for(int i=0; i<n;i++){  
		if(P[i]>=0){
			cout<<"\nprimul nr pozitiv este: "<< P[i]<<" de pe pozitia "<<i<<endl;
			break;}
	}
}
void neg(int P[],int n){
	for (int i=n;i>=0;i--){
		if (P[i]<0){
			cout<<"\nultimul nr negativ este: "<< P[i]<<" de pe pozitia "<<i<<endl;
			break;
	}
}
}
int main()
{ 
	srand(time(0));
	int P[100];
	int n=insert();
	insertP(P,n);
	showV(P,n);
	poz(P,n);
	neg(P,n);

return 0;
}

