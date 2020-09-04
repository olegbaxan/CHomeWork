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
	M[n+1][i]=e;//salvarea valorilor pentru e in vectorul n+1
	for(int j=0;j<e;j++){
		M[i][j]=rand()%10;		
	}
}
for(int i=0; i<n; i++)
{	for(int j=0; j<M[n+1][i]; j++)   {
        cout<<setw(3)<<M[i][j];
   }	
 cout<<endl;
} 
cout<<"Valorile salvate pentru e:"<<endl;
for(int i=0; i<n; i++)   {
        //cout<<setw(3)<<M[i][j];
        cout<<setw(3)<<M[n+1][i];
}	
 cout<<endl;



return 0;
}
