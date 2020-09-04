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
	int V[100],n=rand()%10+1,s=0,p=1;
	
	for (int i=0;i<n;i++){
		
		V[i]=rand()%10+1;	
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
			s+=V[i];
			p=p*V[i];
			cout<<"V[i]="<<V[i]<<endl;
		}
			
}					
	cout<<"Suma = "<<s<<endl;
	cout<<"Produsul = "<<p<<endl;

	return 0;
} 
