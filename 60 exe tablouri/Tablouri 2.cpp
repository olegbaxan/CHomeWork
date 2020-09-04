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
	int V[100],n=rand()%10;
	
	for (int i=0;i<n;i++){
		
		V[i]=rand()%100;	
	}
	
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++){
		if (V[i]%5==0){
			cout<<"Valori divizibile 5 = "<<V[i]<<endl;
		}
		
	};
		 
	return 0;
} 
