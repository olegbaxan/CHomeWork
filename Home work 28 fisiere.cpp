#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int abc1(char *mes)
{
	int number;
	cout<<mes;
	cin>>number;
	return number;
}

int abc2(int a, int b, int c)
{
	return a+b-c;
}

void abc3(int R)
{
	cout<<"Rezultat = "<<R<<endl;
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
	cout<<"Name = "<<name<<endl;
	return name;
}


int main()
{	srand(time(0));
	FILE *fp;
		char name[255];
		nume(name);
	
		fp=fopen(name,"w+");
	int n=abc1("Enter n=");
	if(fp==NULL){cout<<"Error"<<endl;}
	else {for (int i=0;i<n;i++){
		int a=abc1("Enter a=");
		int b=abc1("Enter b=");
		int c=abc1("Enter c=");
		int R=abc2(a,b,c);
		fputc(R,fp);
	}}
	
	fclose(fp);

	fp=fopen(name,"r+");
	if(fp==NULL){cout<<"Error"<<endl;}
	else {cout<<"OK!!!"<<endl;}
	char x;
	while(!feof(fp)){
		x=fgetc(fp);
		if (x!=EOF)
		{
			abc3(x);
		}
	}
	fclose(fp);

return 0;
}

