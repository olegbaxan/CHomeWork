#include<stdio.h>
#include <iostream>
#include<conio.h>
#include <ctime>
#include<math.h>
#include <cstdlib>

using namespace std;

int main()
{ int key,a,b,n,X,Y; float E,sum;
	srand(time(0));
	a=rand()%10+5;
	b=rand()%10+5;
   cout<<" - MENIU - "<<endl;
   cout<<" 1 - Metoda \"for\"  "<<endl;
   cout<<" 2 - Metoda \"while\"  "<<endl;
   cout<<" 3 - Metoda \"do - while\"  "<<endl;
   cout<<"Selecta-ti cazul:";
   cin>>key;
   
switch(key)
 {
    case 1:
   {cout<<"Introdu valoarea pentru X si Y(intervalul minim 8):";
    cin>>X>>Y;
    if(Y-X>=8){
    	for (n=X;n<Y+Y;n++){
    		E=(pow(cos(pow(a,3)),2) + (pow(sin(pow(b,(2+(n+1)))),3))+a);
    		sum+=E;
    		cout<<"n = "<<n<<", E = "<<E<<", Suma = "<<sum<<endl;
		}}
	else{
		cout<<"Intervalul este mai mic decat 15";
	}	
	}
    break;

    case 2:
    {cout<<"Introdu valoarea pentru X si Y(intervalul minim 8):";
    cin>>X>>Y;
    if(Y-X>=8){
    	n=X;
    	while (n<Y+Y){
    		E=(pow(cos(pow(a,3)),2) + (pow(sin(pow(b,(2+(n+1)))),3))+a);
    		sum+=E;
    		cout<<"n = "<<n<<", E = "<<E<<", Suma = "<<sum<<endl;
    		n++;
		}}
	else{
		cout<<"Intervalul este mai mic decat 15";
	}	
	}
      break;
      
    case 3:
    {cout<<"Introdu valoarea pentru X si Y(intervalul minim 8):";
    cin>>X>>Y;
    if(Y-X>=8){
    	n=X;
    	do{
    		E=(pow(cos(pow(a,3)),2) + (pow(sin(pow(b,(2+(n+1)))),3))+a);
    		sum+=E;
    		cout<<"n = "<<n<<", E = "<<E<<", Suma = "<<sum<<endl;
    		n++;
		}
		while (n<Y+Y);    		
		}
	else{
		cout<<"Intervalul este mai mic decat 15";
	}	
	}
      break;
     
    default:{cout<<"Nu este asa caz!"<<endl;}
}
return 0;
}

