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
	double media;	
	
};

void insert(stud S[], int n)
{
	for(int i=0;i<n;i++){
		
		cout<<"Enter nume: ";
		cin>>S[i].nume;
		cout<<"Enter ani: ";
		cin>>S[i].ani;
		cout<<"Enter media: ";
		cin>>S[i].media;
		system("cls");
	}
	
}
void show(stud S[], int n)
{
	for(int i=0;i<n;i++){
		cout<<"Studentul["<<i<<"] Nume:"<<S[i].nume<<" Varsta:"<<S[i].ani<<" Media:"<<S[i].media<<endl;
	}	
}

char* name_to_search(char *name)
{
	cout<<"Enter a name to search: ";
	cin>>name;
	return name;

}
//varianta cu void, afisarea in functie

 
void search(stud S[],int n, char *name)
{
	int* nr_ord=new int;
	*nr_ord=-1;
	for(int i=0;i<n;i++){
		if(strcmp(S[i].nume,name)==0){
		*nr_ord=i;
		cout<<"Numele persoanei "<<S[*nr_ord].nume<<" a fost gasit "<<endl;
	}	
}
}
/*
int* search(stud S[],int n, char *name)
{
	int *nr_ord=new int;
	*nr_ord=-1;
	for(int i=0;i<n;i++){
		if(strcmp(S[i].nume,name)==0){
		*nr_ord=i;
		}
		
}return nr_ord;
}
*/
int main()
{
	stud S[100];
	insert (S,2);
	show(S,2);
	char *name=new char[255] ;
	name_to_search(name);
	
	 //varianta cu void afisarea in functie, este mai optima deoarece ne afiseaza toate persoanele gasite
	search(S,2,name);
	
	//Varianta cu intorcerea valorii in main
/*	int *nr_ord=new int;
	nr_ord=search(S,2,name);
	*nr_ord==-1? cout<<"Numele "<<name<<" nu a fost gasit": cout<<"Numele persoanei "<<S[*nr_ord].nume<<" a fost gasit "<<endl;
	*/
return 0;
}

