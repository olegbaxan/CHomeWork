#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;

int main()
{ 
srand(time(0));
int V[100], Vnum[100], Vc[100], n=rand()%10+10,k=0,x;
  
for(int i=0; i<n;i++)
{
	V[i]=rand()%10;
}
for(int i=0; i<n;i++){	cout<<setw(3)<<V[i]; }
cout<<endl;

for(int i=0; i<n;i++){  
	x=0; 
	for (int j=0;j<k;j++){
		if (V[i]==Vnum[j]){
			Vc[j]++;
			x=1;
		}
	}
	if(x==0){
		Vnum[k]=V[i];
		Vc[k]=1;
		k++;
	}
}
for(int j=0; j<k;j++){	
cout<<"Numarul "<<Vnum[j]<<" se repeta de "<<Vc[j]<<((Vc[j]!=1) ?" ori.":" data.")<<endl;}
/*cout<<endl;
for(int j=0; j<k;j++){	cout<<setw(3)<<Vnum[j]; }
cout<<endl;
for(int j=0; j<k;j++){	cout<<setw(3)<<Vc[j]; }*/
return 0;
}

