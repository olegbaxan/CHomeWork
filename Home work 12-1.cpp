#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;

int main()
{ 
  srand(time(0));
 int V[100], Vmax[100], n=rand()%10+10,z;
  
 for(int i=0; i<n;i++)
 {
 	V[i]=rand()%10;
 }
 do{
 	system("cls");
 	cout<<"Enter a value for Z, less then "<<n<<":";
 	cin>>z;
 }while(n<z);
 
 for(int i=0; i<n;i++){	cout<<setw(3)<<V[i]; }
 cout<<endl;

 int k=0,x=0;
 while(k<z)
 {  int max=-1;
    for(int i=0; i<n;i++)
    {
      if(max<V[i])
	  {	 x=0;
	     for(int j=0; j<k;j++)
	     {   if(Vmax[j]==i){  x=1; break;  }}
	     
		 if(x==0){ max=V[i]; Vmax[k]=i; } 
	  }
    }
    k++;
  }
    cout<<endl;
    
    for(int i=0; i<k;i++)
    {
       //cout<<" max["<<i+1<<"]="<< V[ Vmax[i] ] <<endl;  	
       cout<<Vmax[i]<<endl;
    }
  
return 0;
}

