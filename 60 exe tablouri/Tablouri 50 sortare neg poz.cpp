#include<iostream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
using namespace std;

int main()
{srand(time(0));
 int n,i,aux,terminat,a[100];
cout<<"Introduceti dimensiunea vectorului : ";
cin>>n;

for(i=0;i<n;i++)
{// cout<<"a["<<i<<"]=";
//cin>>a[i];
	a[i]=rand()%20-10;
}
cout<<endl;
for(i=0;i<n;i++)
	{cout<<setw(3)<<a[i];}
	terminat=0;
while(!terminat)
{ terminat=1;

for(i=0;i<n-1;i++)
	if (a[i]>=0&&a[i+1]<0)
	{	aux = a[i];
		a[i] = a[i+1];
		a[i+1] = aux;
		terminat=0;
	}
}

cout<<endl;
cout<<"Vectorul ordonat este : ";
for(i=0;i<=n-1;i++)
cout<<a[i]<<" ";
return 0;
}
