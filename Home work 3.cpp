#include <iostream>
#include <cstdlib>
#include <ctime>

#include <cmath>

using namespace std;

int main()
{srand(time(0));
	int a,b,c,x,y,d,R;


	a=rand()%20-10;
   	b=rand()%20-10;
   	c=rand()%20-10;
   	x=rand()%20;
   	y=rand()%20;
   	
   	cout<<" a="<<a<<", b="<<b<<", c="<<c<<", x="<<x<<", y="<<y<<endl;

//Exercitiu 1   	
	a<=0 ? (c>b ? a = rand()%(c-b)+b : (y>x? a=rand()%(y-x)+x:a=1)):a=2;
   	
   	R=a+b-c;
   	cout<<" a="<<a<<", b="<<b<<", c="<<c<<endl;
   	cout<<"Varianta 1 = "<<R<<endl;

//Exercitiu 2  	
   	b>0 ? b=pow(pow(a,2)+pow(b,3),4): b=pow(c,2)+pow(a,3);
   	
   	R=a+b-c;
   	cout<<" a="<<a<<", b="<<b<<", c="<<c<<endl;
   	cout<<"Varianta 2 = "<<R<<endl;

//Exercitiu 3
	c==0 ? d=-1: d=1;
	c=x+y;
	d<0 ? c++:c--;
	
   	cout<<" a="<<a<<", b="<<b<<", c="<<c<<" d= "<<d<<endl;
   	R=a+b-c;
   	cout<<"Varianta 3 = "<<R<<endl;
	return 0;
} 
