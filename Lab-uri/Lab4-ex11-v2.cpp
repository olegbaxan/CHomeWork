#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{srand(time(0));
	char x[255];
	int i=0,n=rand()%10+1;
	do {
		x[i]=(char)rand()%56+66;
		i++;
	}
	while(_getch()!=27);
	x[i]=0;
	cout<<"Sirul original:  "<<x	<<endl;	
	
	cout<<"Sirul modificat: "<< strnset(x,'+',i/2)	<<endl;	
	
return 0;
}
