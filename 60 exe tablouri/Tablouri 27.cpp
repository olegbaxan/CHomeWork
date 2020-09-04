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
	int V[100],n=rand()%10,x;
	

	for (int i=0;i<n;i++){
		
		V[i]=rand()%20;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<"\nEnter number for x = ";
	cin>>x;
	cout<<endl;
	for (int i=0;i<n;i++){
		if(V[i]==x){
			cout<<"Numarul "<<x<<" se afla pe pozitia "<<i<<endl;
		}//else {cout<<"Acest numar nu este in sirul V.";}
	}
		
		 
	return 0;
} 
