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
	int V[100],VB[100],VS[100],n=rand()%10+10;

	for (int i=0;i<n;i++){
		
		V[i]=rand()%20;
		VB[i]=rand()%20;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++)cout<<setw(3)<<VB[i];
	cout<<endl;
	for(int i=0; i<n;i++){  
		VS[i]=V[i]+VB[i];
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<VS[i];
		 
	return 0;
} 
