#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int abc1()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	return number;
}

int abc2(int a, int b, int c)
{
	return a+b-c;
}

void abc3(int R)
{
	cout<<"Rezultat = "<<R<<endl;
}

int main()
{
	int a=abc1();
	int b=abc1();
	int c=abc1();
	int R=abc2(a,b,c);
	abc3(R);
return 0;
}
