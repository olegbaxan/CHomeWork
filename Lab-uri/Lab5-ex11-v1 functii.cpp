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
void changeM(int C[][100],int n,int m)
{
	for(int i=n/2,tmp; i<n; i++)
{	for(int j=0; j<n/2; j++)   {
		tmp=C[i][n/2+j];
		C[i][n/2+j]=C[i][j];
		C[i][j]=tmp;}}
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
	changeM(C,n,m);
	cout<<"Matricea schimbata cadranele III<=>IV"<<endl;
	showM(C,n,m);
return 0;
}
