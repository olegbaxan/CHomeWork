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
	int V[100],Vp[100],n=rand()%10+10,s,k=0,x,y;
	do{
		x=rand()%10, y=rand()%10+10;
		
	}while(x>y);
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	for (int i=0;i<n;i++){
		
		V[i]=rand()%20;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	int counter=0;
	for(int i=0; i<n;i++){  
		if(V[i]%2==0&&(V[i]>=x&&V[i]<y)){
			Vp[k]=V[i];
			k++;
		}
	}
	for (int i=0;i<k;i++)cout<<setw(3)<<Vp[i];
		 
	return 0;
} 
