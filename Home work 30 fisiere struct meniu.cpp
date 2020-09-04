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
		
}S[1000],SC[1000];


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
		cout<<"Enter media ["<<i+1<<"]: ";
		cin>>S[i].media;
	
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
}

char* nume(char *name)
{	char letter[255];
	name[0]=0;
	for (int i=0;i<5;i++){
		letter[i]=(char)rand()%3+67;
		if(i==4){letter[5]='\0'	;}
	}
	strcat(name,"E:\\__Step\\");
	strcat(name,letter);
	strcat(name,".txt");
	return name;
}
void save(stud S[], int n,FILE *fp)
{	
		fwrite(S,sizeof(stud),n,fp);
	
}
int read(stud ST[], FILE *fp)
{	
	int N=fread(ST,sizeof(stud),1000,fp);
	return N;
}
int main()
{
	srand(time(0));
	FILE *fp,*fpc;
	stud *buff=new stud;
	char name[255];
	nume(name);
	char namec[255];
	nume(namec);

	int n=0,m;
	while (1)
	{
		system("cls");
		cout<<"\t\t*****MENU*****"<<endl;
		cout<<"\t\t 1. Inserare"<<endl;
		cout<<"\t\t 2. Afisare"<<endl;
		cout<<"\t\t 3. Salvare"<<endl;
		cout<<"\t\t 4. Citirea"<<endl;
		cout<<"\t\t 5. Copierea"<<endl;
		cout<<"\t\t ESC. Iesire"<<endl;
		switch(_getch())
		{
			case 49: {system("cls"); n=insert (S,n);} break;
			case 50: {system("cls"); show(S,n);} break;
			case 51: {system("cls"); 	if((fp=fopen(name,"w+b"))==NULL){cout<<"Error"<<endl;}
									 	else{cout<<"OK save"<<endl;save (S,n,fp);fclose(fp);}} break;
			case 52: {system("cls"); 
										if((fp=fopen(name,"r+b"))==NULL){cout<<"Error"<<endl;}
										else{cout<<"OK read"<<endl;int N=read(SC,fp);show(SC,N);fclose(fp);}} break;
			case 53: {system("cls"); 	if((fp=fopen(name,"r+b"))&&(fpc=fopen(namec,"w+b"))==NULL){cout<<"Error"<<endl;}
										else{cout<<"OK both "<<endl;m=read(buff,fp);save( buff, m, fpc);fclose(fp);fclose(fpc);}}break;
			case 27: {exit(0);} break;	
		}	
	}
return 0;
}

