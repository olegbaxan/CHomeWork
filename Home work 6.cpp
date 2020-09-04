#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(0));
	int a,b,c,n,v=0,x=0,y=0,z=0,R,Rpar=0,am=0;
	int ap=0,bp=0,cp=0,ar=0,br=0,cr=0,min=0,max=0;
	n=rand()%10+5;
E:	
ER:
ET:
	a=rand()%100;
	//varianta 4
	if(a%2!=0) goto ER;
	b=rand()%100;
	c=rand()%100;
	min=rand()%100;
	max=rand()%100;
	
	R=a+b-c;
	cout<<v<<" R= "<<a+b-c<<endl;
	cout<<v<<" a= "<<a<<" b="<<b<<" c="<<c<<" n="<<n<<endl;
	cout<<v<<" min= "<<min<<" max="<<max<<endl;
	//varianta 1
	if(a>=3 && a<6)x++;
	if(b>=3 && b<6)y++;
	if(c>=3 && c<6)z++;
	
	//Tema pentru acasa 1
	if(a%2==0 && (a>=0 && a<6))ap++;
	if(b%2==0 && (b>=0 && b<6))bp++;
	if(c%2==0 && (c>=0 && c<6))cp++;
	
	//Tema pentru acasa 2
	if((a>=10&&a<20) || (a>=50&&a<70))ar++;
	if(b%2==0 )br++;
	if((max>min)&&(max-min>10)){
		c=rand()%(max-min)+min;
		if((c%2==0)&&(c>=min && c<max))cr++;
	}
	
	//tema2
/*	S:
		x=rand()%100;
		y=rand()%100;
		if(y-x<10) {goto S;}
		
		YYY:a=rand()%(y-x)+x;
		if(a%2!=0){ goto YYY;}
		*/
	
	//varianta 2
	if(R%2==0) Rpar++;
	
	//varianta 3
	if(a<b && a<c)am++;

//varianta 5
if(R%2==0){
	v++;	
}	

if(v<n) { 
	goto E;
	
}

 cout<<" ac= "<<x<<" bc="<<y<<" cc="<<z<<endl;
 cout<<" Rpar="<<Rpar<<" Rimpar="<<n-Rpar<<endl;
 cout<<" a<b&&a<c="<<am<<endl;
 cout<<" ap= "<<ap<<" bp="<<bp<<" cp="<<cp<<endl;
 cout<<" ar= "<<ar<<" br="<<br<<" cr="<<cr<<endl;
	return 0;
}


