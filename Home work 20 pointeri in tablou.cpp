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
int *ppar = new int[*n];

for(int i=0;i<*n;i++){
	*(p+i)=rand()%10;
}
for(int i=0;i<*n;i++){
	cout<<*(p+i)<<endl;
}
cout<<"\nHow many maximal value(s) to find, less or equal to " << *n<<":";
cin>>*x;
int *p1 = new int[*x];
*k=0;
cout<<"\nFirst "<<*x<<" maximal values are: "<<endl;
while(*k<*x){
	*max=-1;
    for(int i=0; i<*n;i++){
    	if(*max<*(p+i)){	 
			*c=0;
	    	for(int j=0; j<*k;j++){
				if(*(p1+j)==i){  *c=1; break;  }
			}
	    if(*c==0){ *max=*(p+i);  *(p1+*k)=i; } 
	  	}
    }
    (*k)++;
}
*cpar=0;

for (int i=0;i<*n;i++){
	if(*(p+i)%2==0){
		*(ppar+*cpar)=*(p+i);
		(*cpar)++;
	}
}

for(int i=0;i<*k;i++){
	cout<<*(p+*(p1+i))<<endl;
}
cout<<"\nEven numbers:"<<endl;
for(int i=0;i<*cpar;i++){
	cout<<*(ppar+i)<<endl;
}

return 0;
}
