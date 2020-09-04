#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{

	char x[2],y[2];
	int i,counter=0;
while(strcmp(x,y)!=0){
	i=0;
	
	do {
		srand(time(0));
		x[i]=(char)rand()%3+67;
		y[i]=(char)rand()%3+67;
		i++;
	}
	while(i<2);
	x[i]=0;
	y[i]=0;
	counter++;
}	
cout<<"Sirurile x si y au devenit egale cu "<< x<< " ,dupa "<<counter<<((counter !=1)?" tentative.":" tentativa.")<<endl;

return 0;
}
