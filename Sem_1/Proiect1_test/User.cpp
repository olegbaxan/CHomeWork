#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

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
	
}CONT[1000];

void save(user CONT[], int n,FILE *fp)
{	
	fwrite(CONT,sizeof(user),n,fp);
	
}

int main()
{
	int n=2;
	FILE *fp;
	char name[255];
	strcat(name,"E:\\__Step\\users.step");
	strcpy(CONT[0].pass,"Admin");
	strcpy(CONT[0].userID,"Admin");
	CONT[0].id=1;
	strcpy(CONT[0].controlQ,"Academia");
	strcpy(CONT[0].controlR,"StepIT");
	CONT[0].status=1;
	CONT[0].type=1;
	strcpy(CONT[0].emailUser,"admin@admin.md");
	
	strcpy(CONT[1].pass,"User");
	strcpy(CONT[1].userID,"User");
	CONT[1].id=2;
	strcpy(CONT[1].controlQ,"Academia");
	strcpy(CONT[1].controlR,"StepIT");
	CONT[1].status=1;
	CONT[1].type=0;
	strcpy(CONT[1].emailUser,"user@user.md");
	if((fp=fopen(name,"w+b"))==NULL){cout<<"Error"<<endl;}
	else{cout<<"OK save"<<endl;save (CONT,n,fp);fclose(fp);} 

return 0;
}

