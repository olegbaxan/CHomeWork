#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
int a=0,b=0,c=0,o=0;
system("cls");
do{
	cout<<" \n\n\t ***M E N U***"<<endl;
	cout<<" \t 1. Enter a"<<endl;
	cout<<" \t 2. Enter b"<<endl;
	cout<<" \t 3. Enter c"<<endl;
	cout<<" \t 4. Perform a+b-c"<<endl;
	cout<<" \t 5. Show result."<<endl;
	cout<<" \tESC. Exit"<<endl;

switch(_getch()){
case 49:system("cls"); cout<<" 1. "<<endl;system("cls");
	if(a==o){
		cout<<"Enter vaue for a: ";
		switch(_getch()){
		case 0: cout<<"Enter a value different from \"0\"(zero)"<<endl;
		
		}
		
	}	
	break;

case 50:system("cls"); cout<<" 2. "<<endl;system("cls");
	if (a!=0){
		cout<<"Enter value for b: ";
		cin>>b;
	}
	else cout<<"Please enter value for \"a\" before"<<endl;
	break;

case 51:system("cls"); cout<<" 3. "<<endl;system("cls");
	if(a==0)cout<<"Please enter value for \"a\" before"<<endl;
	else if(b==0)cout<<"Please enter value for \"b\" before"<<endl;
	else{
		cout<<"Enter a vaue for c: ";
		cin>>c;
	}
	break;

case 52:system("cls"); cout<<" 4. "<<endl;system("cls");
	if(a==0)cout<<"Please enter value for \"a\" before"<<endl;
	else if(b==0)cout<<"Please enter value for \"b\" before"<<endl;
	else if(c==0)cout<<"Please enter value for \"c\" before"<<endl;
	else{
		cout<<"Operation performed succesfully"<<endl;
		o=a+b-c;}
	break;

case 53:system("cls"); cout<<" 5. "<<endl;system("cls");
	if(a==0)cout<<"Please enter value for \"a\" before"<<endl;
	else if(b==0)cout<<"Please enter value for \"b\" before"<<endl;
	else if(c==0)cout<<"Please enter 2value for \"c\" before"<<endl;
	else if(o==0)	cout<<"Please press 4 before"<<endl;
	else{
		cout<<"Operation result is = "<<o<<endl;
		a=0,b=0,c=0,o=0;
	}	
	break;

case 27: exit(0);
default: system("cls"); cout<<"Please enter a valid MENU number"<<endl;
}

}
while(1);
	
	return 0;
} 
