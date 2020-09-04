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
void sort(stud S[], int n)
{
	int terminat=0,aux;
	double auxd;
	char *auxi=new char;
	while(!terminat)
	{ terminat=1;
	for(int i=0;i<n-1;i++){
		if (S[i].media>S[i+1].media){
			
			auxd = S[i].media;
			S[i].media = S[i+1].media;
			S[i+1].media = auxd;
			
			aux = S[i].ani;
			S[i].ani = S[i+1].ani;
			S[i+1].ani = aux;
			
			strcpy (auxi, S[i].nume);
			strcpy (S[i].nume, S[i+1].nume);
			strcpy (S[i+1].nume, auxi);
			
			terminat=0;
		}	
	}
	}
}
int main()
{
	stud S[100];
	insert (S,6);
	show(S,6);
	sort (S,6);
	show(S,6);

return 0;
}

