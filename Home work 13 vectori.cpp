#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int M[100][100],n=rand()%10+5;
//1.1 while
int i=0;
int j=0;

while(i<n){
	j=0;
	while(j<n){
	
		M[i][j]=rand()%100;
		j++;
		
	}
	i++;
}
//cout<<"n = "<<n<<", i = "<<i<<", j = "<<j<<endl;
i=0;
j=0;
while(i<n){
	j=0;
	while(j<n){
		//cout<<"2. n = "<<n<<", i = "<<i<<", j = "<<j<<endl;
		cout<<setw(3)<<M[i][j];
		
		j++;
	}
	//cout<<"1. n = "<<n<<", i = "<<i<<", j = "<<j<<endl;
	i++;
	cout<<endl;
	
}
//1.2 do while
cout<<endl;

i=0;
j=0;

do{
	j=0;
	do {
		//cout<<"2. n = "<<n<<", i = "<<i<<", j = "<<j<<endl;
		M[i][j]=rand()%100;
		j++;
		
	}while(j<n);
	//cout<<"1. n = "<<n<<", i = "<<i<<", j = "<<j<<endl;
	i++;
}
while(i<n);
//cout<<"n = "<<n<<", i = "<<i<<", j = "<<j<<endl;

i=0;
j=0;
do{
	j=0;
	do {
	
		cout<<setw(3)<<M[i][j];
		j++;
		
	}while(j<n);
	
	cout<<endl;
	i++;
}
while(i<n);
return 0;
}
