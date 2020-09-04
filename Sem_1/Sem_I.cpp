#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;
/*
struct stud
{
	char nume[255];
	char prenume[255];
	int varsta;
	int IDNP;
	char grupa[255];
	int id;
	char frecventa[255];
	bool status;
	double media;	
	char emailStud[255];
	
}STUD[1000];

struct stat
{
	int id;
	int auth;
	int insertedUsers;
	int insertedStud;
	int editedStud;
	int inactStud;
	
}STAT[1000];

struct user
{
	char pass[255];
	char userID[255];
	int id;
	char controlQ[255];
	char controlR[255];
	bool status;
	bool type;	
	char emailUser[255];
	
}CONT[1000];*/
void insertS(stud S[], int n)
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
void insertU(user U[], int n)
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
}
void showFound(stud S[], int n)
{
	cout<<"Studentul["<<n<<"] Nume:"<<S[n].nume<<" Varsta:"<<S[n].ani<<" Media:"<<S[n].media<<endl;
}
char* find(char mes[])
{
	char *p=new char[255];
	cout<<"Enter a name to search: ";
	cin>>p;
	return p;
}
void cautaNUME(stud S[],int n)
{
	char *nume;
	bool *nr_ord=new bool;
	*nr_ord=0;
	nume=insertSIR("Insert name:");
	for(int i=0;i<n;i++){
		if(strcmp(S[i].nume,nume)==0){
			*nr_ord=1;
			showFound(S,i);
		}	
	}
	if(*nr_ord==0)cout<<"Nu a fost gasit nici un student"<<endl;	
}

int main()
{
	stud S[100];
	while (1)//Admin
	{
		system("cls");
		cout<<"\t\t*****MENU*****"<<endl;
		cout<<"\t\t 2. Insert student"<<endl;
		cout<<"\t\t 3. Show student"<<endl;
		cout<<"\t\t 4. Find student"<<endl;
		cout<<"\t\t 5. Edit student"<<endl;
		cout<<"\t\t 6. Report"<<endl;
		cout<<"\t\t 7. Statistic"<<endl;
		cout<<"\t\t Iesire"<<endl;
		switch(_getch())
		{
			case 49: {system("cls"); insert (S,5);} break;
			case 50: {system("cls"); show(S,5);system("pause");} break;
			case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: {exit(0);} break;	
		}	
	}
	while (1)//User
	{
		system("cls");
		cout<<"\t\t*****MENU*****"<<endl;
		cout<<"\t\t 3. Show student"<<endl;
		cout<<"\t\t 4. Find student"<<endl;
		cout<<"\t\t 5. Edit student"<<endl;
		cout<<"\t\t 6. Report"<<endl;
		cout<<"\t\t Iesire"<<endl;
		switch(_getch())
		{
			case 49: {system("cls"); insert (S,5);} break;
			case 50: {system("cls"); show(S,5);system("pause");} break;
			case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: {exit(0);} break;	
		}	
	}
	

return 0;
}

