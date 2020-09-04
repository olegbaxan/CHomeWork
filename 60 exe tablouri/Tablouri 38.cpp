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
	int V1[100],V2[100],n=rand()%10+10,m=rand()%10+10,c, min=101;
	

	for (int i=0;i<n;i++){
		
		V1[i]=rand()%100;	
	}
	for (int i=0;i<m;i++){
		
		V2[i]=rand()%100;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V1[i];
	cout<<endl;
	for (int i=0;i<m;i++)cout<<setw(3)<<V2[i];
	cout<<endl;
	for (int i=0;i<m;i++){
		if (min>V2[i]){
			min=V2[i];
		}
	}
	cout<<"Numar minim din V2= "<<min<<endl;
	for (int i=0;i<n;i++){
		if(V1[i]<min){
			c++;	
			cout<<"Numar minim V1 = "<<V1[i]<<endl;
		}
		
		}
		
	(c!=0? cout<<"In V1 sunt "<<c<<" numere mai mici decat in V2"<<endl:cout<<"Nu sunt numere mai mici in V1 fata de V2"<<endl);
		 
	return 0;
} 
