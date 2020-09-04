#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;

int main()
{ 
srand(time(0));
int *n = new int;
*n=rand()%10+10;
int *P = new int[*n];
  
for(int i=0; i<*n;i++)
{
	*(P+i)=rand()%20-10;
}
for(int i=0; i<*n;i++){	cout<<setw(3)<<*(P+i); }
cout<<endl;

for(int i=0; i<*n;i++){  
	if(*(P+i)>=0){
		cout<<"primul nr pozitiv este: "<< *(P+i)<<" de pe pozitia "<<i<<endl;
		break;
		
	}
}
for (int i=*n;i>=0;i--){
	if (*(P+i)<0){
		cout<<"ultimul nr negativ este: "<< *(P+i)<<" de pe pozitia "<<i<<endl;
		break;
	}

}	

return 0;
}

