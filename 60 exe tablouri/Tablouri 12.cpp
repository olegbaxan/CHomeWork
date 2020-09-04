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
	int V[100],n=rand()%10+10,s;
	
	for (int i=0;i<n;i++){
		
		V[i]=rand()%20;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	int counter=0;
	for (int i=0;i<n;i++){
		if (V[i]%2!=0){
			s+=V[i];
			counter++;
			cout<<"V[i]="<<V[i]<<", Suma="<<s<<", Counter="<<counter<<endl;
					}
		
	}
	cout<<"Media aritmetica a valorilor impare = "<<s/counter<<endl;
		 
	return 0;
} 
