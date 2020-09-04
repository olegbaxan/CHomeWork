#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<ctime>
using namespace std;

void insertChar(char x[])
{
	int i=0;
	do {
		x[i]=(char)rand()%56+66;
		i++;
	}
	while(_getch()!=27);
	x[i]=0;
	cout<<"Sirul original:  "<<x<<endl;	
	
	cout<<"Sirul modificat: "<< strnset(x,'+',i/2)	<<endl;	

}

int main()
{	
	char x[255];
	insertChar(x);

	
return 0;
}
