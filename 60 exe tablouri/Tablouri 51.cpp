#include<iostream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
using namespace std;

int main()
{srand(time(0));
 int n,i,aux,count=0,a[100];
cout<<"Introduceti dimensiunea vectorului : ";
cin>>n;

for(i=0;i<n;i++)
{// cout<<"a["<<i<<"]=";
//cin>>a[i];
	a[i]=rand()%20;
}
cout<<endl;
for(i=0;i<n;i++)
	{cout<<setw(3)<<a[i];}
if(a[0]<a[n-1]){
	for(i=0;i<n;i++)
	{	if (a[i]>=a[0]&&a[i]<=a[n-1]){
			count++;
	}	
			
	
	}
}
else if (a[0]>a[n-1]){
	for(i=0;i<n;i++)
	{	if (a[i]<=a[0]&&a[i]>=a[n-1]){

			count++;
	}
			
	}
}else cout<<"Numerele sunt egale"<<endl;


cout<<endl;
cout<<"Numarul de elemente intre a[0]=" <<a[0]<<" si a["<<n-1<<"]="<<a[n-1]<<", este "<<count<<endl;
return 0;
}
