#include <iostream>
#include <math.h>

//#include <cmath>

using namespace std;

int main()
{
	int a,b,c,x;

	cout << "Enter a value for a: ";
	cin >> a;
	cout << "Enter a value for b: ";
	cin >> b;
	cout << "Enter a value for c: ";
	cin >> c ;
	cout << "Enter a value for x: ";
	cin >> x;
	cout <<"a="<<a<<", b = "<<b<<", c = "<<c<< ", x = "<< x<<endl;
	
	
	double R1 = (sin(a));
	cout<<"sin(a) = "<<R1<<endl;
	double R2 = (pow(b,2))+R1;
	cout<<"(pow(b,2))+R1 = "<<R2<<endl;
	double R3 = sqrt(a-R2);
	cout<<"sqrt(a-R2) = "<<R3<<endl;
	double R4 = x+R3;
	cout<<"x+R3 = "<<R4<<endl;
	int R5 = (pow(a,2))+(pow(b,2))-2;
	cout<<"(pow(a,2))+(pow(b,2))-2 = "<<R5<<endl;
	int R6 = 15-(a*b);
	cout<<"15-(a*b) = "<<R6<<endl;
	double R7 = (double)R5/R6;
	cout<<"R5/R6 = "<<R7<<endl;
	double q = R4/R7;
	cout<<"Rezultat = "<<q<<endl;
	return 0;
} 
