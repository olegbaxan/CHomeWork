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
	int V1[100],V2[100],n=rand()%10+10, min=101,poz,j=-1;
	

	for (int i=0;i<n;i++){
		V1[i]=rand()%100;	
	}
	
	for (int i=0;i<n;i++)cout<<setw(3)<<V1[i];
	cout<<endl;

	while(j<=n-2){

		for (int i=j+1;i<n;i++){
			if (min>V1[i]){
				min=V1[i];
				poz=i;
			}
		}
		for (j+1;j<=poz;j++){
			V2[j+1]=poz;
			}
		j=poz;
		min=101;

}
	for (int i=0;i<n;i++)cout<<setw(3)<<V2[i];
		
	//(c!=0? cout<<"In V1 sunt "<<c<<" numere mai mici decat in V2"<<endl:cout<<"Nu sunt numere mai mici in V1 fata de V2"<<endl);
		 
	return 0;
} 
