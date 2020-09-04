#include <iostream>
#include <cstdlib>
#include <ctime>

#include <cmath>

using namespace std;

int main()
{srand(time(0));
	int a,b,c,x,y,R;

	a=rand()%20;
   	b=rand()%20;
   	c=rand()%20;
   	x=rand()%20;
   	y=rand()%20;
   	
   	cout<<" a="<<a<<", b="<<b<<", c="<<c<<", x="<<x<<", y="<<y<<endl;
   	a<=0 ? (c>b ? a = rand()%(c-b)+b : (y>x? a=rand()%(y-x)+x:a=1)):a==2;
   	
   	R=a+b-c;
   	cout<<" a="<<a<<", b="<<b<<", c="<<c<<", x="<<x<<", y="<<y<<endl;
   	cout<<"Varianta 1 = "<<R<<endl;

	return 0;
} 
