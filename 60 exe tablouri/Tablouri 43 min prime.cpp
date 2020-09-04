#include <iostream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(0));
	int V[100],V1[100],n=rand()%10+1,s=0,p=-1,min=100;
	
	for (int i=0;i<n;i++){
		
		V[i]=rand()%10+10;	
	}
	
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++){
		bool prime=1;
		for (int j=2;j<V[i];j++){
			if (V[i]%j==0){
			prime=0;
			break;
		}
	}
		if(prime){
			if (min>V[i]){
				min=V[i];
				p=i;
			}
		}
			
}					
	if (min!=100){
		cout<<"Minim = "<<min<<" poz="<<p<<endl;
		int x=min;
		s=0;
		while(x!=0){
			//cout<<"x="<<x<<endl;
			s=s+x%10;
			//cout<<"s="<<s<<endl;
			x=x/10;
		}
		for (int i=0;i<n;i++){
			V1[i]=V[i]/s;
		}
		for (int i=0;i<n;i++){
			cout<<setw(3)<<V1[i];
	}
	
	}
	
	else cout<<"Nu exista numar prim in acest sir."<<endl;
	//Afisarea vectorului rezultat din mpartirea V[i] la suma cifrelor numarului minim prim

	

	return 0;
} 
