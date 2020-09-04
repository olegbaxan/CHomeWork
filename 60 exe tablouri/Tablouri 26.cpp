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
	int V[100],n=rand()%5+1,x=5;
	bool mesaj = 0;

	for (int i=0;i<n;i++){
		
		V[i]=rand()%20;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++){
		if(V[i]%2!=0&&V[i]<x){
			mesaj = 1;
			break;
		}
}if(mesaj == 1) cout<<"NU"<<endl;
else cout<<"DA"<<endl;
		
		 
	return 0;
} 
