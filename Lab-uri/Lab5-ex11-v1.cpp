#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int C[100][100],n=6;

for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		C[i][j]=rand()%10;
	
}
}
cout<<"Matricea primara"<<endl;
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {
        cout<<setw(3)<<C[i][j];
   }	
 cout<<endl;
}

cout<<"Schimbarea Cadran III <=> IV"<<endl;
for(int i=n/2,tmp; i<n; i++)
{	for(int j=0; j<n/2; j++)   {
		tmp=C[i][n/2+j];
		C[i][n/2+j]=C[i][j];
		C[i][j]=tmp;}}
cout<<endl;
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {cout<<setw(3)<<C[i][j];}	
 cout<<endl;
}	

	
return 0;
}
