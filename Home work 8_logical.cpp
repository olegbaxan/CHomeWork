#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;

int main()
{

srand(time(0));
int n,s=0,max=0,nr_i=0;
n=rand()%5+10;
for (int i=0,a,b,c;i<n;i++){
	
	a=rand()%20;
	b=rand()%20;
	c=rand()%20;
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
	a%2==0?a:a++;
	b%2==0?b:b++;
	c%2==0?c:c++;
	cout<<"ac="<<a<<" bc="<<b<<" cc="<<c<<endl;	
	s+=(a+b-c);
	if (a+b-c>max){
		max=a+b-c;
		nr_i=i;
	}
	
	
	cout<<i<<" R= "<<a+b-c<<" suma R ="<<s<<endl;

}

cout<<"Suma ="<<s<<endl;
cout<<"Rezultat maximal ="<<max<<endl;
cout<<"Iteratia rezultat maximal ="<<nr_i<<endl;

	return 0;
}

