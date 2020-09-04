#include<iostream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
using namespace std;

int main()
{srand(time(0));
 int n,i,s=0,count=0,a[100],min=101,max=-1;
 double m;
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
	if(min>a[i]){
		min=a[i];
	}
	if(max<a[i]){
		max=a[i];
	}
	
	s+=a[i];
}

m=double(s-min-max)/(n-2);

cout<<"\nmax="<<max<<", min="<<min<<", suma="<<s<<"\nMedia aritmetica fara max si min este = ";
cout<<fixed<<setprecision(3)<<m<<endl;




return 0;
}
