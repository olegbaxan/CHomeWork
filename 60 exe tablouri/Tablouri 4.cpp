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
	int V[100],n=rand()%10+10,s;
	
	for (int i=0;i<n;i++){
		
		V[i]=rand()%90+10;	
	}
	
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++){
		if (V[i]%7==0&&i%2!=0){
			s+=V[i];
			cout<<"Valori impare divizibile 7= "<<V[i]<<endl;
		}
		
	}
	cout<<"S = "<<s<<endl;
		 
	return 0;
} 
