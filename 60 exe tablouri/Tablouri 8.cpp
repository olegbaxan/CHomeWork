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
	int V[100],n=rand()%10,s=0,p=1;
	cout<<"n="<<n<<endl;
	for (int i=0;i<n;i++){
		
		V[i]=rand()%10+100;	
		cout<<"V="<<V[i]<<endl;
	}
	
	for (int i=0;i<n;i++)cout<<setw(4)<<V[i];
	cout<<endl;
	for (int i=0;i<n;i++){
		int x=V[i];
		s=0;
		while(x!=0){
			//cout<<"x="<<x<<endl;
			s=s+x%10;
			//cout<<"s="<<s<<endl;
			x=x/10;
			
		}	//cout<<"Suma = "<<s<<endl;
			if(s%2!=0){
				cout<<"s="<<s<<endl;
				p=p*s;
			}
			
		
			
}					
	//cout<<"Suma = "<<s<<endl;
	cout<<"Produsul = "<<p<<endl;

	return 0;
} 
