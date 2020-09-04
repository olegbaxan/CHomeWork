#include <iostream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{

	int V1[100],V2[100],V3[100],V4[100],n;

	srand(time(0));
//E:
	
	
	do {
		n=rand()%10+10;
		cout<<"n="<<n<<endl;
	}while (n%2!=0);
	for (int i=0;i<n;i++){
	
		V1[i]=rand()%10;
		V2[i]=rand()%10;
		V3[i]=rand()%10;
		V4[i]=rand()%10;
	}
	/*
	n=rand()%10+10;		
	if (n%2==0){
		for (int i=0;i<n;i++){
	
			V1[i]=rand()%10;
			V2[i]=rand()%10;
			V3[i]=rand()%10;
			V4[i]=rand()%10;
		}
	}
	else goto E;
	*/
	for (int i=0;i<n;i++)cout<<setw(3)<<V1[i];
	cout<<endl;
	for (int i=0;i<n;i++)cout<<setw(3)<<V2[i];

	for (int i=0,tmp;i<n/2;i++){
		tmp = V1[i];
		V1[i]=V2[(n-1)-i];
		V2[(n-1)-i]=tmp;	
	}
	
	for (int i=0,tmp;i<n/2;i++){
		tmp = V1[(n-1)-i];
		V1[(n-1)-i]=V2[i];
		V2[i]=tmp;	
	}
	
	cout<<"\nV1[1]<=>V2[4]"<<endl;
	for (int i=0;i<n;i++){
		if (i==n/2){
			cout<<" |";
		}
		cout<<setw(3)<<V1[i];
	}	
	cout<<endl;
	for (int i=0;i<n;i++){
		if (i==n/2){
			cout<<" |";
		}
		cout<<setw(3)<<V2[i];
	}
	cout<<endl;
	for (int i=0;i<n;i++) cout<<"---";
	cout<<endl;
	for (int i=0;i<n;i++)cout<<setw(3)<<V3[i];
	cout<<endl;
	for (int i=0;i<n;i++)cout<<setw(3)<<V4[i];
	
	for (int i=0,tmp;i<n/2;i++){
		tmp = V3[i];
		V3[i]=V4[(n/2)+i];
		V4[(n/2)+i]=tmp;	
	}
	
	for (int i=n/2,tmp;i<n;i++){
		tmp = V3[i];
		V3[i]=V4[i-(n/2)];
		V4[i-(n/2)]=tmp;	
	}
	cout<<"\nV3[->]<=>V4[i->]"<<endl;
	for (int i=0;i<n;i++){
		if (i==n/2){
			cout<<" |";
		}
		cout<<setw(3)<<V3[i];
	}
	cout<<endl;	
	for (int i=0;i<n;i++){
		if (i==n/2){
			cout<<" |";
		}
		cout<<setw(3)<<V4[i];
	}
	return 0;
} 
