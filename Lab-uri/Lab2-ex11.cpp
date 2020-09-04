#include<stdio.h>
#include <iostream>
#include<conio.h>
#include <ctime>
#include<math.h>
#include <cstdlib>
# define Pi 3.14

using namespace std;

int main()
{ int key,a,b,e; float x,J;
	srand(time(0));
	a=rand()%10+5;
	b=rand()%10+5;
	e=rand()%10+5;
   cout<<" - MENIU - "<<endl;
   cout<<" 1 - Metoda if  "<<endl;
   cout<<" 2 - Metoda if-else-if "<<endl;
   cout<<"Selecta-ti cazul:";
   cin>>key;
   
  
switch(key)
 {
    case 1:
   {cout<<"Introdu valoarea pentru necunoscuta x:";
   cin>>x;
    if(x<2.8)
		{ J=(a+b)/(pow(e,x)+cos(x));}
    if(x>=2.8 && x<=6)
    	{ J=(a+b)/(x+1);}
    if(x>6)
    	{ J=pow(e,x)+sin(x)+Pi;}
    	cout<<"Rezultatul J="<<J; 
    break;
   }

    case 2:
    {cout<<"Introdu valoarea pentru necunoscuta x:";
    cin>>x;
      	if(x<2.8)
     		{ J=(a+b)/(pow(e,x)+cos(x));}
      	else if(x>=2.8 && x<=6)
     		{ J=(a+b)/(x+1);}
       	else
        	{ J=pow(e,x)+sin(x)+Pi;}
      		
      cout<<"Rezultatul J="<<J<<endl;
      break;
     }
    default:{cout<<"Nu este asa caz!"<<endl;}
}
return 0;
}

