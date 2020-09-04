#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main()
{
srand(time(0));
int *n = new int;
int *x = new int;
int *k=new int;
int *c=new int;
int *cpar=new int;

cout<<"Enter n:";
cin>>*n;


int *p = new int[*n];

for (int i=0;i<*n;i++){
	*(p+i)=rand()%10;
}
for (int i=0;i<*n;i++){
	cout<<" "<<*(p+i);
}

int *pppar = new int[*k];
int *ppar;
*k=1;
for (int i=0;i<*n;i++){
	
	if(*(p+i)%2==0){
		int *ppar = new int[*k];//cream un tablou care va fi recreat de fiecare data cu un element mai mult.
	
		*(ppar+(*k-1))=*(p+i);//copiem in tabel, valoarea para gasita

		for(int j=0;j<*k-1;j++){//copiem datele pastrate in alt tabel intermediar
			*(ppar+j)=*(pppar+j);
		}
		delete[] pppar;//stergem tabloul intermediar
		pppar=ppar;//copiem adresa noului tabel creat dupa k++ in tabelul intermediar
		(*k)++;
	}
}
cout<<endl;
for(int i=0;i<*k-1;i++){
	cout<<" "<<*(pppar+i);
}




return 0;
}
