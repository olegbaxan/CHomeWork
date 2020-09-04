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
char* insertSIR(char mes[])
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
	stud *S=new stud[10];
	
	
	while (1)
	{
		system("cls");
		cout<<"\t\t*****MENU*****"<<endl;
		cout<<"\t\t 1. Inserare"<<endl;
		cout<<"\t\t 2. Afisare"<<endl;
		cout<<"\t\t 3. Cautare"<<endl;
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

