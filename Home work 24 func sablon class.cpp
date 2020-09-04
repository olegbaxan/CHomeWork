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
void insert(T *mes,T1 *x)
{
	cout<<mes;
	cin>>*x;
	//return x;
}

template <typename T>
void insertV(T *v, int *n)
{
	for (int i=0;i<*n;i++){
		insert("Enter a value:",(v+i));
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
	//int x;
	insertV(Vi,&ni);
	showV(Vi,&ni);
	cout<<endl;
	//double y;
	insertV(Vd,&nd);
	showV(Vd,&nd);

	
return 0;
}

