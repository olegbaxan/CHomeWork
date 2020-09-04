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
int *max=new int;
int *k=new int;
int *c=new int;
int *cpar=new int;

cout<<"Enter n:";
cin>>*n;

int *p = new int[*n];
//int *p1 = new int[*n];

for(int i=0;i<*n;i++){
	*(p+i)=rand()%10;
}
for(int i=0;i<*n;i++){
	cout<<*(p+i)<<endl;
}
int V[100];
for(int i=0; i<10; i++)
{
V[i]=rand()%10;
}
for(int i=0; i<10; i++)
{
cout<<" "<<V[i];
}
cout<<endl;
*k=1;
int *XtabELpar= new int[ *k ];
int *tabELpar ;
for(int i=0; i<10; i++)
{
	if(V[i]%2==0)
	{
		int *tabELpar = new int[ *k ];
		*(tabELpar+(*k-1))=V[i];
		for(int j=0; j<*k-1; j++)
		{
			*(tabELpar+j)=*(XtabELpar+j);
		}
		delete[] XtabELpar;
		XtabELpar=tabELpar;
		k++;
	}
}
cout<<" k="<<k<<endl;
for(int j=0; j<*k-1; j++)
{
cout<<" "<<*(XtabELpar+j);
}
return 0;
}
