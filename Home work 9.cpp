#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{

bool abool,bbool,cbool,obool;
int a,b,c,o;
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
	if(!abool){
		cout<<"Enter value for a: ";
		cin>>a;
		abool=true;
	}
	else cout<<"You already entered a value for \"a\"";
	break;

case 50:system("cls"); cout<<" 2. "<<endl;system("cls");
	if (!abool){
		cout<<"Please enter value for \"a\" before"<<endl;	
	}
	else if(!bbool){
		cout<<"Enter value for b:";
		cin>>b;
		bbool=true;
	}
	else { 
		cout<<"You already entered a value for \"b\"";
	}
	break;

case 51:system("cls"); cout<<" 3. "<<endl;system("cls");
	if(!abool)cout<<"Please enter value for \"a\" before"<<endl;
	else if(!bbool)cout<<"Please enter value for \"b\" before"<<endl;
	else if(!cbool){
		cout<<"Enter a value for c: ";
		cin>>c;
		cbool=true;
	}
	else cout<<"You already entered a value for \"c\"";
	break;

case 52:system("cls"); cout<<" 4. "<<endl;system("cls");
	if(!abool)cout<<"Please enter value for \"a\" before"<<endl;
	else if(!bbool)cout<<"Please enter value for \"b\" before"<<endl;
	else if(!cbool)cout<<"Please enter value for \"c\" before"<<endl;
	else{
		cout<<"Operation performed succesfully"<<endl;
		o=a+b-c;
		obool=true;
		}
	break;

case 53:system("cls"); cout<<" 5. "<<endl;system("cls");
	if(!abool)cout<<"Please enter value for \"a\" before"<<endl;
	else if(!bbool)cout<<"Please enter value for \"b\" before"<<endl;
	else if(!cbool)cout<<"Please enter value for \"c\" before"<<endl;
	else if(!obool)	cout<<"Please press 4 before"<<endl;
	else{
		cout<<"Operation result is = "<<o<<endl;
	abool=bbool=cbool=obool=false;
	}
	break;

case 27: exit(0);
default: system("cls"); cout<<"Please enter a valid MENU number"<<endl;
}

}
while(1);
	
	return 0;
} 
