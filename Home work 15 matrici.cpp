#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int M[100][100],n=rand()%10,e;

for (int i=0;i<n;i++){
	e=rand()%10+1;
	M[i][0]=e; //salvarea valorilor pentru e in fiecare inceput de vector pe pozitia j=0
	for(int j=1;j<=M[i][0];j++){
		M[i][j]=rand()%10;		
	}
}

for(int i=0; i<n; i++)
{	for(int j=1; j<=M[i][0]; j++)   {
        cout<<setw(3)<<M[i][j];
   }	
 cout<<endl;
} 
cout<<"Valorile salvate pentru e:"<<endl;
for(int i=0; i<n; i++)   {
        cout<<setw(3)<<M[i][0];
}	
cout<<endl;

cout<<"Matricea completa"<<endl;
for(int i=0; i<n; i++)
{	for(int j=0; j<=M[i][0]; j++)   {
        cout<<setw(3)<<M[i][j];
   }	
 cout<<endl;
} 


return 0;
}
