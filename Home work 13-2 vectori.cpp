#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));
int M[100][100],s=0,S=0,n=rand()%10+5;

for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		M[i][j]=rand()%90+10;
		
		}
	
}

for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if (j==0||j==n-1){
			cout<<setw(3)<<M[i][j];
		}
		else if(i==0 && j<n){
			cout<<setw(3)<<M[i][j];
		}
		else if(i==n-1 && j<n){
			cout<<setw(3)<<M[i][j];
		}
		else cout<<setw(3)<<"   ";

		
	}cout<<endl;
}



return 0;
}
