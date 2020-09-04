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
}S[1000];


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
{
	for(int i=0;i<n;i++){
		cout<<"Studentul["<<i<<"] Nume:"<<S[i].nume<<" Varsta:"<<S[i].ani<<" Media:"<<S[i].media<<" Nr. lipse: "<<S[i].nr_lipse<<" Suma pt. lipse: "<<S[i].suma_lipse<<endl;
	}	
}

int main()
{
	int n=0;
	
	while (1)
	{
		system("cls");
		cout<<"\t\t*****MENU*****"<<endl;
		cout<<"\t\t 1. Inserare"<<endl;
		cout<<"\t\t 2. Afisare"<<endl;
		cout<<"\t\t ESC. Iesire"<<endl;
		switch(_getch())
		{
			case 49: {system("cls"); n=insert (S,n);} break;
			case 50: {system("cls"); show(S,n);system("pause");} break;
			case 27: {exit(0);} break;	
		}	
	}
	

return 0;
}

