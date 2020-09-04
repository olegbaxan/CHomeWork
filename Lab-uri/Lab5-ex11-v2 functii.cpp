#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int insert()
{
	int x;
	cout<<"Enter val=";
	cin>>x;
	return x;
}
void insertM(int C[][100],int n, int m)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			C[i][j]=rand()%10;
		}
	}
}
void showM(int C[][100],int n,int m)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){cout<<setw(3)<<C[i][j];}
		cout<<endl;
	}
}
int diffR(int C[][100],int n,int m)
{	int s1,s2;
	for(int i=0; i<2; i++)
{	for(int j=0; j<n; j++)   {
		if(i==0) s1+=C[i][j];
		if(i==1) s2+=C[i][j];
		}}
		cout<<"Suma rand 1 = "<<s1<<", rand 2 = "<<s2<<endl;
		return s1-s2;
}

int main()
{ 
	srand(time(0));
	int C[100][100];
	int n=insert();
	int m=insert();
	insertM(C,n,m);
	cout<<"Matricea initiala"<<endl;
	showM(C,n,m);
	int diff=diffR(C,n,m);
	cout<<"Diferenta dintre suma rand 1 si 2 este = "<<diff<<endl;
return 0;
}
