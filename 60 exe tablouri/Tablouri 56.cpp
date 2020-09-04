#include<iostream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
using namespace std;

int main()
{srand(time(0));
 int n,i,s=0,count=0,a[100],r[100];
cout<<"Introduceti dimensiunea vectorului : ";
cin>>n;

for(i=0;i<n;i++)
{// cout<<"a["<<i<<"]=";
//cin>>a[i];
	a[i]=rand()%100;
}
cout<<endl;
for(i=0;i<n;i++)
	{cout<<setw(3)<<a[i];}

for (int i=0;i<n;i++){
	s+=a[i];
	r[n-i-1]=s;
	
}
cout<<endl;
for(i=0;i<n;i++)
	{cout<<setw(4)<<r[i]<<endl;}



return 0;
}
