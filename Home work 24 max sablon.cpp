#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

//template <typename T>
void insertV(int *v, int *n)
{
	for (int i=0;i<*n;i++){
		*(v+i)=rand()%10;
	}
}
void insertV(double *v, int *n)
{
	for (int i=0;i<*n;i++){
		*(v+i)=0.1*(rand()%10);
	}
}
void insertV(bool *v, int *n)
{
	for (int i=0;i<*n;i++){
		*(v+i)=rand()%2;
	}
}

template <typename T>
void showV(T *v, int *n)
{
	for (int i=0;i<*n;i++){
		cout<<" "<<*(v+i);
}
}

template <typename T>
T* sumV(T *v, int *n)
{
	T *sum=new T;
	*sum=0;
	for (int i=0;i<*n;i++){
		*sum+=*(v+i);
}
	return sum;
}

template <typename T>
void showVAL(T *Si)
{
	cout<<"\nSuma="<<*Si<<endl;
}

template <typename T,typename T1>
void insert(T *mes,T1 *x)
{
	cout<<mes;
	cin>>*x;
}
template <typename T>
T* maxV(T *v, int *n)
{
	T *max=new T;
	*max=-1;
	for (int i=0;i<*n;i++){
		if(*max<*(v+i))
		*max=*(v+i);
}
	return max;
}

int main()
{
	srand(time(0));
	int Vi[100],ni=10,nd=11,nb=10;
	double Vd[101];
	insertV(Vi,&ni);
	showV(Vi,&ni);
	cout<<endl;
	insertV(Vd,&nd);
	showV(Vd,&nd);
	cout<<endl;
	bool Vb[100];
	insertV(Vb,&nb);
	showV(Vb,&nb);
	int *Si;
	Si=sumV(Vi,&ni);
	showVAL(Si);
	double *Sd;
	Sd=sumV(Vd,&nd);
	showVAL(Sd);
	bool *Sb;
	Sb=sumV(Vb,&nb);
	showVAL(Sb);
	int x;
	insert("Enter x=",&x);
	showVAL(&x);
	double y;
	insert("Enter y=",&y);
	showVAL(&y);
	bool z;
	insert("Enter z=",&z);
	showVAL(&z);
	
	int *maxi;
	maxi=maxV(Vi,&ni);
	showVAL(maxi);
	double *maxd;
	maxd=maxV(Vd,&nd);
	showVAL(maxd);
	bool *maxb;
	maxb=maxV(Vb,&nb);
	showVAL(maxb);
	
return 0;
}

