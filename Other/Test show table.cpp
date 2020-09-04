#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

struct stud
{
	char nume[255];
	int ani;
	double media=0.0;
		
}S[1000];

void show(stud S[], int n)
{	int a=0,pas=5,page=1;

	while(1)
	{	system("cls");
		cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
		cout<<char(186)<<"Nr. "<<char(179)<<"  nume  "<<char(179)<<" ani "<<char(179)<<" media "<<char(186)<<endl;
		cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;

	
	for(int i=a;(i<(a+pas)&&(i<n));i++){
		cout<<char(186)<<char(0)<<char(0)<<setw(2)<<i+1<<char(179)<<setw(8)<<S[i].nume<<char(179)<<setw(5)<<S[i].ani<<char(179)<<setw(7)<<S[i].media<<char(186)<<endl;
		if(i<(a+pas-1)&&(i<n-1)){
			cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;
		}
		else if((i==(a+pas)-1)||i==n-1){
			cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
		}
	}
		cout<<"\tPage "<<page<<" of "<<(n%pas==0 ? n/pas:(n/pas)+1)<<endl;
		int Key=(_getch());
		if(Key=='+'){a+=pas;page++;if(a>=n){a-=pas;page--;};if(page>n/pas+1){n%2==0 ? page=n/pas:(n/pas)+1;page--;}}
		else if (Key=='-'){a-=pas;page--;if(a<0){a=0;};if(page==0)page=1;}
		else if (Key==27){break;}
	}
}

void fill(stud S[], int n)
{	
	for (int i=0;i<n;i++){
		char text[]="Stud";
		strcpy(S[i].nume,text);
		sprintf(S[i].nume, "%s %d", S[i].nume, i);
		S[i].ani=rand()%10+20;
		S[i].media=(rand()%8+1)*((rand()%1+0.1))+(rand()%8+1);
		}
}

int main()
{
	srand(time(0));
	int n=12;
	while (1)
	{
		system("cls");
		cout<<"\t\t*****MENU*****"<<endl;
		cout<<"\t\t 1. Inserare"<<endl;
		cout<<"\t\t 2. Afisare"<<endl;
		cout<<"\t\t ESC. Iesire"<<endl;
		switch(_getch())
		{
			case 49: {system("cls"); fill(S,n);} break;
			case 50: {system("cls"); show(S,n);} break;
			case 27: {exit(0);} break;	
		}	
	}
return 0;
}

