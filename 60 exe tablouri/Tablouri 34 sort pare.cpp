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
	int V[100],n=rand()%10+10,max=-1,tmp;
	

	for (int i=0;i<n;i++){
		
		V[i]=rand()%100;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];

	cout<<endl;
	int mutat=0;
	while(!mutat){
		mutat=1;
		for (int i=0;i<n;i++){
		if (V[i]%2==0){
			for (int j=i+1;j<n;j++){
				if (V[j]%2==0&&V[i]>V[j]){
					//cout<<"Before: V[i]="<<V[i]<<" / V[j]="<<V[j]<<endl;
					tmp=V[j];
					V[j]=V[i];
					V[i]=tmp;
					mutat=0;
					//cout<<"After:V[i]="<<V[i]<<" / V[j]="<<V[j]<<endl;
			}
		}
		}
		
	}
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
		 
	return 0;
} 
