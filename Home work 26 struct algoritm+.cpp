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
	double media=0;
	int nr_lipse=0;
	double suma_lipse=0;
	
	int nnote=0;
	struct note
	{
		int nota;
		char disciplina[255];
		}NOTE[100];	
	
	struct lipsa
	{
		int lipse;
		char disciplina[255];
		}LIPSA[100];		
}S[1000],SC[1000],buff[1000];

int insert(stud S[], int n)
{
	int i=n;
	do 
	{
		system("cls");
		cout<<"Enter nume ["<<i+1<<"]: ";
		cin>>S[i].nume;
		cout<<"Enter ani ["<<i+1<<"]: ";
		cin>>S[i].ani;
		
		int j=S[i].nnote;
		
		do{
			cout<<"\nEnter nota "<<j+1<<':';
			cin>>S[i].NOTE[j].nota;
			S[i].media+=S[i].NOTE[j].nota;
			
			//Numar de lipse per disciplina
			cout<<"\nAre studentul lipse la disciplina: "<<j+1<<"? ESC -> NU, anykey -> DA";
			if(_getch()!=27)
			{
				cout<<"\nEnter numar lipse "<<j+1<<':';
				cin>>S[i].LIPSA[j].lipse;
				S[i].nr_lipse+=S[i].LIPSA[j].lipse;
			}
			j++;
			cout<<"\nnote ESC - exit, anykey continue ...";
		}while(_getch()!=27);
		S[i].media=S[i].media/j;
		S[i].nnote=j;
		S[i].suma_lipse=S[i].nr_lipse*50;
		
		//system("cls");
		i++;
		cout<<"\nstudent ESC - exit, anykey continue ..."<<endl;
	}while(_getch()!=27);
	
	return i;	
}
void show(stud S[], int n)
{	int a=0,b=2,page=1;
	while(1)
	{	system("cls");
		cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
		cout<<char(186)<<"Nr. "<<char(179)<<" nume "<<char(179)<<" ani "<<char(179)<<" media "<<char(186)<<endl;
		cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;

	
	for(int i=a;i<b;i++){
		cout<<char(186)<<char(0)<<char(0)<<setw(2)<<i+1<<char(179)<<setw(6)<<S[i].nume<<char(179)<<setw(5)<<S[i].ani<<char(179)<<setw(7)<<S[i].media<<char(186)<<endl;
		if(i<b-1){
			cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;
		}
		else{
			cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
		}
		
	}
		cout<<"\tPage "<<page<<" of "<<(n%2==0 ? n/2:(n/2)+1)<<endl;
		int Key=(_getch());
		if(Key=='+'){a+=2;b+=2;page++;if(b>=n){a=n-2;b=n;};if(page>n/2){n%2==0 ? page=n/2:page=n/2+1;}}
		else if (Key=='-'){a-=2;b-=2;page--;if(a<0){a=0;b=2;};if(page==0)page=1;}
		else if (Key==27){break;}	
	}

int main()
{
	stud *S=new stud[10];
	
	
	while (1)
	{
		system("cls");
		cout<<"\t\t*****MENU*****"<<endl;
		cout<<"\t\t 1. Inserare"<<endl;
		cout<<"\t\t 2. Afisare"<<endl;
		//cout<<"\t\t 3. Cautare"<<endl;
		cout<<"\t\t Iesire"<<endl;
		switch(_getch())
		{
			case 49: {system("cls"); insert (S,5);} break;
			case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: {exit(0);} break;	
		}	
	}
return 0;
}

