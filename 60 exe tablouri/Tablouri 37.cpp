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
	int V[100],n=rand()%10+10,tmp,k;
	

	for (int i=0;i<n;i++){
		
		V[i]=rand()%100;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<"\nEnter value for k :";
	cin>>k;
	cout<<endl;
	int mutat=0;
	while(!mutat){
		mutat=1;
		for (int i=0;i<k-1;i++){
			if (V[i]<V[i+1]){
				//cout<<"Before: V[i]="<<V[i]<<" / V[i+1]="<<V[i+1]<<endl;
				tmp=V[i+1];
				V[i+1]=V[i];
				V[i]=tmp;
				mutat=0;
				//cout<<"After:V[i]="<<V[i]<<" / V[i+1]="<<V[i+1]<<endl;
			}
		}for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
		cout<<endl;
		for (int j=k;j<n-1;j++){
			if (V[j]>V[j+1]){
				//cout<<"Before: V[j]="<<V[j]<<" / V[j+1]="<<V[j+1]<<endl;
				tmp=V[j+1];
				V[j+1]=V[j];
				V[j]=tmp;
				mutat=0;
				//cout<<"After:V[j]="<<V[j]<<" / V[j+1]="<<V[j+1]<<endl;
			}
		}
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
		 
	return 0;
} 
