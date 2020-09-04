#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{	srand(time(0));
	char x[255];
	int i=0,lowercase=0,uppercase=0;
	do {
		x[i]=(char)rand()%56+66;
		i++;
	}
	while(_getch()!=27);
	x[i]=0;
	cout<<x	<<endl;	
	i=0;
	while(x[i]!='\0'){
		if(x[i]>='a'&&x[i]<='z'){
			lowercase++;
		}
		if(x[i]>='A'&&x[i]<='Z'){
			uppercase++;
		}
		i++;
	}

cout<<"Cuvintul ("<<x<<") contine \""<<lowercase<<"\" litere mici si \""<<uppercase<<"\" litere mari."<<endl;


return 0;
}
