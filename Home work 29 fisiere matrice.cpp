#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int abc1()
{
	int number;
	cout<<"Enter a number: ";
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
	FILE *fp, *fr;
		char name[255];
		nume(name);
	int a,b,c,R;
		fp=fopen(name,"w+");
	int n=abc1();
	fprintf(fp,"%d\n",n);
	if(fp==NULL){cout<<"Error"<<endl;}
	else{cout<<"OK creat"<<endl;}
	
	for (int i=0;i<n;i++){
		int m=rand()%9+1;
		fprintf(fp,"%d ",m);
		for(int j=0;j<m;j++){
			int Nr=rand()%10;
			fprintf(fp,"%d ",Nr);
			fprintf(stdout,"%d ",Nr);
		}
		fprintf(fp,"\n");
		fprintf(stdout,"\n");
	}
	fclose(fp);

	fp=fopen(name,"r+");
	strcat(name,"rez");
	fr=fopen(name,"w+");
	if(fp==NULL){cout<<"Error"<<endl;}
	else{cout<<"OK creat read"<<endl;}
	int N,m, rez;
	fscanf(	fp,"%d\n",&N);
	//fprintf(stdout,"n=%d\n",N);
	for (int i=0;i<N;i++){
		fscanf(	fp,"%d ",&m);
		//fscanf(stdout,"m=%d ",m);
		for (int i=0;i<m;i++){
			fscanf(	  fp,"%d ",&R);
			rez+=R;
			fprintf(stdout,"%d ",R);
		}
		fscanf(fp,"\n");
		fprintf(stdout,"\n");
		fprintf(fr,"rez=%d\n",rez);
		fprintf(stdout,"rez=%d\n",rez);
		rez=0;
	}
	
	fclose(fp);

return 0;
}

