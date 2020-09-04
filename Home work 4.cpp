#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	
	srand(time(0));
	int a,b,c;
	a=rand()%20+90;
	b=rand()%20+90;
	c=rand()%20+90;

	cout <<"a = "<<a<<" b= "<<b<<" c= "<<c<<endl;
	
	if(a>b && a<c) a=rand()%3+15;	
	
	if(b>100 && c<100) b=rand()%8+3;
	
	if (c>0){
		c=a;
	}		
	else if(c=0){
		c=b;
	}
	else{
		c=0;
	}
	
	cout <<"a = "<<a<<" b= "<<b<<" c= "<<c<<endl;
	cout <<"R = "<<a+b-c<<endl;
	
	
	return 0;
} 
