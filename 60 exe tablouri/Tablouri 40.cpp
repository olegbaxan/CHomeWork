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
	int V1[100],n=rand()%10+10, tmp;
	

	for (int i=0;i<n;i++){
		V1[i]=rand()%100;	
	}
	
	for (int i=0;i<n;i++)cout<<setw(3)<<V1[i];
	cout<<endl;
	for (int i=0;i<n/2;i++){
			tmp=V1[i];
			V1[i]=V1[n-i-1];
			V1[n-i-1]=tmp;
		}

	for (int i=0;i<n;i++)cout<<setw(3)<<V1[i];
		
	//(c!=0? cout<<"In V1 sunt "<<c<<" numere mai mici decat in V2"<<endl:cout<<"Nu sunt numere mai mici in V1 fata de V2"<<endl);
		 
	return 0;
} 
