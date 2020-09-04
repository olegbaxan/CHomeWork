#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int M[100][100],MB[100][100],n=4;
/*
do {
	n=rand()%5;
	cout<<"n="<<n<<endl;
}while (n%2!=0);
*/
for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		M[i][j]=rand()%10;
		MB[i][j]=M[i][j];
}
}
cout<<"Matricea primara"<<endl;
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {
        cout<<setw(3)<<M[i][j];
   }	
 cout<<endl;
}
cout<<"Schimbarea Cadran II <=> I"<<endl;
for(int i=0,tmp; i<n/2; i++)
{	for(int j=n/2; j<n; j++)   {
		tmp=M[i][j-n/2];
		M[i][j-n/2]=M[i][j];
		M[i][j]=tmp;}}
cout<<endl;
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {cout<<setw(3)<<M[i][j];}	
 cout<<endl;
}
for (int i=0;i<n;i++){//copierea informatiei primare in matrice
	for(int j=0;j<n;j++){M[i][j]=MB[i][j];}}
cout<<"Schimbarea Cadran II <=> III"<<endl;
for(int i=0,tmp; i<n/2; i++)
{	for(int j=n/2; j<n; j++)   {
		tmp=M[n/2+i][j-n/2];
		M[n/2+i][j-n/2]=M[i][j];
		M[i][j]=tmp;}}
cout<<endl;
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {cout<<setw(3)<<M[i][j];}	
 cout<<endl;
}
for (int i=0;i<n;i++){//copierea informatiei primare in matrice
	for(int j=0;j<n;j++){M[i][j]=MB[i][j];}}
cout<<"Schimbarea Cadran II <=> IV"<<endl;
for(int i=0,tmp; i<n/2; i++)
{	for(int j=n/2; j<n; j++)   {
		tmp=M[n/2+i][j];
		M[n/2+i][j]=M[i][j];
		M[i][j]=tmp;}}
cout<<endl;
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {cout<<setw(3)<<M[i][j];}	
 cout<<endl;
}	

	
return 0;
}
