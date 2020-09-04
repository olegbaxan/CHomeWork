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
	int V[100],n=rand()%10+10,max=-1;

	for (int i=0;i<n;i++){
		
		V[i]=rand()%20-10;	
	}
	for (int i=0;i<n;i++)cout<<setw(3)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++){
		if(max<V[i]&&V[i]>0) max=V[i];
}
	cout<<"Numarul maxim = "<<max<<endl;	 
	return 0;
} 
