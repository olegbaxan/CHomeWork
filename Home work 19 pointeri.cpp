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
int V[100],V1[100];
int a, b, c,poz=0,neg=0,min=20,tmp;
int *p,*p1,*pa,*pb,*pc,*pn,*ppoz,*pneg,*pmin;
int n=rand()%5+2;
p=V;
p1=V1;
pa=&a;
pb=&b;
pc=&c;
pn=&n;
ppoz=&poz;
pneg=&neg;
pmin=&min;

for (int i=0;i<*pn;i++){
	*pa=rand()%10;
	*pb=rand()%10;
	*pc=rand()%10;
	cout<<"a="<<*pa<<" b="<<*pb<<" c="<<*pc<<endl;
	*(p+i)=(*pa+*pb-*pc);
	cout<<"Suma a+b-c= "<<(*pa+*pb-*pc)<<endl;
	*(p1+i)=*(p+i);
	if (i==*pn-1){
		tmp=*p1;
		*p1=*(p1+i);//*(p+*(pn)-1)=9
		*(p1+i)=tmp;
	}
	if (*(p+i)>=0){(*ppoz)++;}
	else (*pneg)++;
	if(*pmin>*(p+i))*pmin=*(p+i);
}
for (int i=0;i<*pn;i++){
	cout<<"i="<<i<<" p+i="<<p+i<<" *(p+i)="<<*(p+i)<<" V["<<i<<"]="<<V[i]<<" p1+i="<<p1+i<<" *(p1+i)="<<*(p1+i)<<" V1["<<i<<"]="<<V1[i]<<endl;
	cout<<"Numere pozitive= "<<*ppoz<<", negative = "<<*pneg<<" Valoarea minima ="<<*pmin<<endl;	
}
return 0;
}
