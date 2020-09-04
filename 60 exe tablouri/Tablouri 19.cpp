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
	int V[100],n=rand()%10+10,s,counter;

	for (int i=0;i<n;i++){
		
		V[i]=rand()%20;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	counter=0;
	for (int i=0;i<n;i++){
		s+=V[i];
		counter++;
	}
	cout<<"Media aritmetica este pentru "<<s<<"/"<<counter<<" = "<<s/counter;	 
	return 0;
} 
