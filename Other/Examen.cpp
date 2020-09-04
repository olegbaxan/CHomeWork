#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
/*
int f1(int a[],int b){
	for (int i=0;i<b;i++){
		b--;
		cout<<"b="<<b<<endl;
	}
	return (b);
}

int f2(int a[]){
	int i;
	for (i=0;i<3;i++){
		i++;
		cout<<"i="<<i<<endl;
	}
	return (f1(a,a[i]));
}*/
int main()
{/*
int m[]={1,2,3,4,5};
int Z=f2(m);
cout<<"Z="<<Z<<endl;

int *p =new int ;
*p=0;
*p++;
cout<<"*p="<<*p<<endl;
*/
int	x=6, y=2,z=0;
for (int i=0;i<5;i++){
	//cout<<"++y="<<++y<<" y="<<y<<endl;
	z=((x++)+(++y))-((i++)+(++y));
	cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
	cout<<"z="<<z<<endl;
}

	return 0;
}

