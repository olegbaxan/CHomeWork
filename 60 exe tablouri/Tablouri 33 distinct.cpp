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
	int V[100],n=rand()%10+10,max=-1;
	

	for (int i=0;i<n;i++){
		
		V[i]=rand()%100;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];

	cout<<endl;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (V[i]==V[j]){
				cout<<"NU - "<<V[i]<<endl;
			}
		}
		}	
		 
	return 0;
} 
