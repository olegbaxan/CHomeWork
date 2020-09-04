#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int insert()
{
	int x;
	cout<<"Enter val=";
	cin>>x;
	return x;
}
void insertM(int M[][100],int n, int m)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			M[i][j]=rand()%10;
			//M[i][j]=insert();	
		}
	}
}
void showM(int M[][100],int n,int m)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){cout<<setw(3)<<M[i][j];}
		cout<<endl;
	}
}
int suma(int M[][100],int n,int m){
	int sum=0;
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){sum+=M[i][j];}
	}
	return sum;
}

int maxmin(int M[][100],int n,int m,bool w){
	int min=2222222;
	int max=-2222222;
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(min>M[i][j]) min=M[i][j];
			if(max<M[i][j]) max=M[i][j];
		}
	}
		if(w==0)return max;
		else return min;
}
int parimp(int M[][100],int n,int m,bool w){
	int sump=0;
	int sumi=0;
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(M[i][j]%2==0) sump+=M[i][j];
			else sumi+=M[i][j];
		}
	}
		if(w==0)return sump;
		else return sumi;
}
void copyM(int M[][100],int MC[][100],int n, int m)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){MC[i][j]=M[i][j];}
	}
}
int countX(int M[][100],int n,int m,int x){
	int c=0;
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){if(x==M[i][j]){c++;}}
}
	return c;
}
int main()
{
	
	srand(time(0));
	int M[100][100];
	int n=insert();
	int m=insert();
	insertM(M,n,m);
	showM(M,n,m);
	int Suma=suma(M,n,m);
	cout<<"\nSuma="<<Suma;
	int max=maxmin(M,n,m,0);
	int min=maxmin(M,n,m,1);
	cout<<"\nmin="<<min<<" max="<<max<<endl;
	int par=parimp(M,n,m,0);
	int impar=parimp(M,n,m,1);
	cout<<"Suma par="<<par<<" Suma impar="<<impar<<endl;
	int MC[100][100];
	copyM(M,MC,n,m);
	showM(MC,n,m);
	int x=insert();
	int count=countX(M,n,m,x);
	cout<<"Number "<<x<<" repeated "<<count<<" times."<<endl;
return 0;
}
