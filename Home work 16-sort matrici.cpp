#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int M[100][100],n=rand()%5+10;

for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		M[i][j]=rand()%10;}
}
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {
        cout<<setw(3)<<M[i][j];
   }	
 cout<<endl;
}
cout<<endl;
int terminat=0,aux;
while(!terminat)
{ terminat=1;
for(int i=0;i<n;i++){
	for (int j=0;j<n-1;j++){
		if(M[i][j]>M[i][j+1])
	{	aux = M[i][j];
		M[i][j] = M[i][j+1];
		M[i][j+1] = aux;
		terminat=0;
	}
	}
	
}
	
}
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {
        cout<<setw(3)<<M[i][j];
   }	
 cout<<endl;
}
return 0;
}
