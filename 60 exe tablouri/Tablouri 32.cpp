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
	int V[100],n=rand()%10,max=-1;
	

	for (int i=0;i<n;i++){
		
		V[i]=rand()%100;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];

	cout<<endl;
	for (int i=0;i<n;i++){
		if(V[i]%2!=0){
			
			max=V[i];
			break;
			//cout<<"DA - pe pozitia "<<i<<endl;
		}
	}if(max==-1)cout<<"Nu exist numare impare";
	else cout<<"Primul numar impar este = "<<max;
		
		 
	return 0;
} 
