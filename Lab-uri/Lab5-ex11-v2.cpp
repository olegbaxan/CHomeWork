#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int C[100][100],s1=0,s2=0,n=6;

for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		C[i][j]=rand()%10;
}
}
for(int i=0; i<n; i++)
{	for(int j=0; j<n; j++)   {
        cout<<setw(3)<<C[i][j];
   }	
 cout<<endl;
}

for(int i=0; i<2; i++)
{	for(int j=0; j<n; j++)   {
		if(i==0)s1+=C[i][j];
		if(i==1)s2+=C[i][j];
		}}
cout<<endl;

cout<<"Diferenta dintre suma rand 1 = "<<s1<<" si suma rand 2 = "<<s2<<" este = "<<s1-s2<<endl;
return 0;
}
