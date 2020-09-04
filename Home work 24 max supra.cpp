#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;


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
void showV(int *v, int *n)
{
	for (int i=0;i<*n;i++){
		cout<<" "<<*(v+i);
}
}
void showV(double *v, int *n)
{

	for (int i=0;i<*n;i++){
		cout<<" "<<*(v+i);
}
}
void showV(bool *v, int *n)
{

	for (int i=0;i<*n;i++){
		cout<<" "<<*(v+i);
}
}
int* sumV(int *v, int *n)
{
	int *sum=new int;
	*sum=0;
	for (int i=0;i<*n;i++){
		*sum+=*(v+i);
}
	return sum;
}
double* sumV(double *v, int *n)
{
	double *sum= new double;
	*sum=0;
	for (int i=0;i<*n;i++){
		*sum+=*(v+i);
}
	return sum;
}
bool* sumV(bool *v, int *n)
{
	bool *sum=new bool;
	*sum=0;
	for (int i=0;i<*n;i++){
		*sum+=*(v+i);
}
	return sum;
}
void showVAL(int *Si)
{
	cout<<"\nint="<<*Si<<endl;
}
void showVAL(double *Sd)
{
	cout<<"\ndouble="<<*Sd<<endl;
}
void showVAL(bool *Sb)
{
	cout<<"\nbool="<<*Sb<<endl;
}

void insert(char *mes,int *x)
{
	cout<<mes;
	cin>>*x;
}
void insert(char *mes,double *x)
{
	cout<<mes;
	cin>>*x;
}
void insert(char *mes,bool *x)
{
	cout<<mes;
	cin>>*x;
}

int* maxV(int *v, int *n)
{
	int *max=new int;
	*max=-1;
	for (int i=0;i<*n;i++){
		if(*max<*(v+i))
		*max=*(v+i);
}
	return max;
}
double* maxV(double *v, int *n)
{
	double *max= new double;
	*max=-1;
	for (int i=0;i<*n;i++){
		if(*max<*(v+i))
		*max=*(v+i);
}
	return max;
}
bool* maxV(bool *v, int *n)
{
	bool *max=new bool;
	*max=0;
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

