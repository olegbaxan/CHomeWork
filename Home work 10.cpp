#include <iostream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{

//5
	int V[100];
	int n,S=0,ep=0,max=-2,min=1000,Vm,Vx,S1=0,S2=0;
	cout<<"Enter value for n: ";
	cin>>n;
	srand(time(0));
	for (int i=0;i<n;i++){
		V[i]=rand()%1000;
	}
	for (int i=0;i<n;i++){
		
		cout<<"V["<<i<<"]="<<V[i]<<endl;
		S+=V[i];
		
		if (i%2==0 &&V[i]%2!=0){
			
			ep++;
		}
	}
	for (int i=0;i<n;i++){
				
		if (V[i]%2==0){
			if (max<V[i]){
				max=V[i];
				Vm=i;
			}
		}
}
	for (int i=0;i<n;i++){
				
		if (V[i]>=0&&V[i]<10){
			if (min>V[i]){
				min=V[i];
				Vx=i;
				
			}
			
		}
		
}
	for (int i=0;i<n/2;i++)S1+=V[i];
	for (int i=n/2;i<n;i++)S2+=V[i];
	
	for (int i=0;i<n;i++){
		if(i<=n/2)	S1+=V[i];
		else S2+=V[i];
	}
	

	cout<<"Suma = "<<S<<endl;
	cout<<"El. pare, valori impar = "<<ep<<endl;
	cout<<"Valoare maxim para = "<<max<<", pozitia = "<<Vm<<endl;
	if(min<1000)cout<<"Valoare minim impara [1:10]= "<<min<<", pozitia = "<<Vx<<endl;
	cout<<"Suma1 = "<<S1<<endl;
	cout<<"Suma2 = "<<S2<<endl;
	

	
	
	return 0;
} 
