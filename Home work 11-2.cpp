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

	int V[1000],n=5,r=0,min=21,max=-11;

	srand(time(0));
	for (int i=0;i<n;i++){
		
		V[4*i]=rand()%10;
		V[4*i+1]=rand()%10;	
		V[4*i+2]=rand()%10;
		V[4*i+3]=V[4*i]+V[4*i+1]-V[4*i+2];
		r+=V[4*i+3];
		if (max<V[4*i+3]){
			max=V[4*i+3];
		}
		if(min>V[4*i+3]){
			min=V[4*i+3];
		}
	}
	
	for (int i=0;i<n*4;i++)cout<<setw(3)<<V[i];
	//ex.5
	cout<<"\nSuma rezultatelor este = "<<r<<endl;
	//ex.6
	cout<<"Rezultatul maxim este = "<<max<<endl;
	cout<<"Rezultatul minim este = "<<min<<endl;
	//ex.7
	for (int i=0,tmp;i<n;i++){
		tmp = V[4*i];
		V[4*i]=V[4*i+2];
		V[(4*i+2)]=tmp;	
	}
	cout<<"a<=>c"<<endl;
	for (int i=0;i<n*4;i++)cout<<setw(3)<<V[i];
	
	return 0;
} 
