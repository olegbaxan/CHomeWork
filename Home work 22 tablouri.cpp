#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int insert()
{
	int x;
	cout<<"\nEnter val=";
	cin>>x;
	return x;
}
void insertV(int V[],int n)
{
	for(int i=0;i<n;i++){
		V[i]=rand()%10;
		//V[i]=insert();
	}
}
void showV(int V[],int n)
{
	for (int i=0;i<n;i++){
		cout<<" "<<V[i];
	}
}
int suma(int V[],int n){
	int sum=0;
	for (int i=0;i<n;i++){
		sum+=V[i];
		}
	
	return sum;
}

int maxmin(int V[],int n,bool w){
	int min=222222222;
	int max=-222222222;
	for (int i=0;i<n;i++){
		if(min>V[i])min=V[i];
		if(max<V[i])max=V[i];
		}
		if(w==0)return max;
		else return min;
}
int parimp(int V[],int n, bool w){
	int sump=0;
	int sumi=0;
	for (int i=0;i<n;i++){
		if(V[i]%2==0) sump+=V[i];
		else sumi+=V[i];
		
	}
		if(w==0)return sump;
		else return sumi;
}
void copyV(int V[],int VC[],int n)
{
	for(int i=0;i<n;i++){
		VC[i]=V[i];
	}
}
int countX(int V[],int n,int x){
	int c=0;
	for (int i=0;i<n;i++){
		if(x==V[i])c++;
}
	return c;
}
int main()
{
	srand(time(0));
	int V[100];
	int n=insert();
	insertV(V,n);
	showV(V,n);
	int Suma=suma(V,n);
	cout<<"\nSuma="<<Suma;
	int max=maxmin(V,n,0);
	int min=maxmin(V,n,1);
	cout<<"\nmin="<<min<<" max="<<max<<endl;
	int VC[100];
	copyV(V,VC,n);
	showV(VC,n);
	int x=insert();
	int count=countX(V,n,x);
	cout<<"\nNumber "<<x<<" repeated "<<count<<" times."<<endl;
return 0;
}
