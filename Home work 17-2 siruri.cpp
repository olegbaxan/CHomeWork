#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
using namespace std;

int main()
{
	char x[255];
	int i=0,terminat=0,tmp;
	cout<<" Enter a text =";
	cin.getline(x,255);
	cout<<x	<<endl;	
	
	while(!terminat){
		terminat=1;
		for(int i=0;i<strlen(x)-1;i++)
			if(x[i]>x[i+1]){
				tmp=x[i];
				x[i]=x[i+1];
				x[i+1]=tmp;
				terminat=0;

		}
	}

cout<<x<<endl;

return 0;
}
