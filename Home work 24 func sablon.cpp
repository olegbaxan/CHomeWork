#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

template <typename T,typename T1>
T1* insert(T *mes,T1 *x)
{
	cout<<mes;
	cin>>*x;
	return x;
}

template <typename T>
void insertV(T *v, int *n, T *x)
{
	for (int i=0;i<*n;i++){
		*(v+i)=*(insert("Enter a value:",x));
	}
}

template <typename T>
void showV(T *v, int *n)
{
	for (int i=0;i<*n;i++){
		cout<<" "<<*(v+i);
}
}

int main()
{
	srand(time(0));
	int Vi[100],ni=5,nd=5,nb=10;
	double Vd[101];
	int x;
	insertV(Vi,&ni,&x);
	showV(Vi,&ni);
	cout<<endl;
	double y;
	insertV(Vd,&nd,&y);
	showV(Vd,&nd);

	
return 0;
}

