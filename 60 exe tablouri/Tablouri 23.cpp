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
	int V[100],VM[100],n=rand()%10+10,max=-11,k=0;

	for (int i=0;i<n;i++){
		
		V[i]=rand()%20-10;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++){
		if(max<V[i]) max=V[i];
}
	cout<<"Numarul maxim = "<<max<<endl;	
	for (int i=0;i<n;i++){
		if (max==V[i]){
			VM[k]=i;
			k++;
		}
	}

	for (int i=0;i<k;i++)cout<<setw(3)<<VM[i];	 
	return 0;
} 
