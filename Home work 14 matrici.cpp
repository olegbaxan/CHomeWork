 #include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int W[5][1000],n=10,x,c1=0,c2=0;
 
while (c1<1000||c2<1000)
{
	if(c1>=10&&c2>=10){
		break;
	}
	x=rand()%10;
	//cout<<"1 = "<<c1<<" 2 = "<<c2<<" x="<<x<<endl;

		
	if(x%2==0&&c1<n){
		W[0][c1]=x;
		c1++;
	}
	else if(x%2!=0&&c2<n){
		W[1][c2]=x;
		c2++;
	}			
}
 	for (int i=0;i<n;i++){
 		W[2][i] = W[0][i]+W[1][i];
 		W[3][i] = W[0][i]-W[1][i];
 		W[4][i] = W[0][i]*W[1][i];
	}
	 
	for (int i=0;i<n;i++){
 		cout<<"W[0] = "<<W[0][i]<<" W[1] = "<<W[1][i]<<" W[2] = "<<W[2][i]<<" W[3] = "<<W[3][i]<<" W[4] = "<<W[4][i]<<endl;
	}
	  	
return 0;
} 
