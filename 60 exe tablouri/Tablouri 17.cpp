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
	int V[100],VB[100],n=rand()%10+10;

	for (int i=0;i<n;i++){
		
		V[i]=rand()%20;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	int k=0;
	for (int i=0;i<n;i++){
		bool prime=1;
		for (int j=2;j<V[i];j++){
			if (V[i]%j==0){
			prime=0;
			break;
			}
		}
		if(prime){
			VB[k]=V[i];
			k++;
		}
			
	}
	for (int i=0;i<k;i++)cout<<setw(3)<<VB[i];	 
	return 0;
} 
