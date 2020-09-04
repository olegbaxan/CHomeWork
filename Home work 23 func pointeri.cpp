#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int insert(char *mes)
{
	int x;
	cout<<mes;
	cin>>x;
	return x;
}
void insertV(int *v, int *n)
{
	for (int i=0;i<*n;i++){
		*(v+i)=rand()%10;
	}
}
void showV(int *v, int *n)
{
	for (int i=0;i<*n;i++){
		cout<<" "<<*(v+i);
}
}
void copyV(int *v, int *w, int *m)
{
	for (int i=0;i<*m;i++){
		*(w+i)=*(v+i);
}
}
void sortV(int *w,int *n){
	int *terminat = new int;
	int *aux=new int;
	*terminat=0;
	while(!(*terminat))
	{ *terminat=1;
		for(int i=0;i<*n-1;i++){
			if(*(w+i)>*(w+i+1))
			{	
				*aux = *(w+i);
				*(w+i) = *(w+i+1);
				*(w+i+1) = *aux;
				*terminat=0;
			}
		}
	}
}

int main()
{
	srand(time(0));
	int *n = new int;
	*n=insert("Enter n=");
	int *v = new int [*n];
	int *w = new int [*n];
	insertV(v,n);
	copyV(v,w,n);
	sortV(w,n);
	showV(v,n);
	cout<<endl;
	showV(w,n);
return 0;

}
