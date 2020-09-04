#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

struct statistica
{
	int id;
	int auth;
	int insertedUsers;
	int insertedStud;
	int editedStud;
	int inactUser;
	
}STAT[1000];

void save(statistica STAT[], int n,FILE *fp)
{	
	fwrite(STAT,sizeof(statistica),n,fp);
	
}

int main()
{
	int n=2;
	FILE *fp;
	char name[255];
	strcat(name,"E:\\__Step\\statistica.step");
	STAT[0].id=1;
	STAT[0].auth=0;
	STAT[0].insertedUsers=0;
	STAT[0].insertedStud=0;
	STAT[0].editedStud=0;
	STAT[0].inactUser=0;
	

	STAT[1].id=2;
	STAT[1].auth=0;
	STAT[1].insertedUsers=0;
	STAT[1].insertedStud=0;
	STAT[1].editedStud=0;
	STAT[1].inactUser=0;

	if((fp=fopen(name,"w+b"))==NULL){cout<<"Error"<<endl;}
	else{cout<<"OK save"<<endl;save (STAT,n,fp);fclose(fp);} 

return 0;
}

