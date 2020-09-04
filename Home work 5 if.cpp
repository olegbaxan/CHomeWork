#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	char mod_insert;
	int a,b,c,R;
	
	cout << "Selectati modul de inserare a datelor manual / automat (m/a): ";
	cin >> mod_insert;
	

	if (mod_insert=='m'){
		cout <<"Modul de inserare a datelor selectat este: \"manual\""<<endl;
		cout << "Introduceti valoarea pentru a: ";
		cin >>a;
		cout << "Introduceti valoarea pentru b: ";
		cin >>b;
		cout << "Introduceti valoarea pentru c: ";
		cin >>c;
		cout <<"a="<<a<<" b = "<<b<<" c = "<<c<<endl;
		R=a+b-c;
		cout <<"Valoarea initiala R = "<<R<<endl;
	
		if(R%2==0 &&(R>=10&&R<50)){
			srand(time(0));
			a=rand()%11+66;
			b=rand()%11+66;
			c=rand()%11+66;
			cout <<"a="<<a<<" b = "<<b<<" c = "<<c<<endl;
			R=a+b-c;
			cout <<"Valoarea recalculata R = "<<R<<endl;
		
		}
		else if(R%2==0){
			cout <<"Valoarea R calculata nu se incadreaza in limitele [10:50]"<<endl;
		}
		else if(R>10&&R<50){
			cout <<"Valoarea R calculata nu este numar PAR"<<endl;
		}
		else{
			cout <<"Valoarea R calculata nu este numar PAR si nici nu se incadreaza in limitele [10:50]"<<endl;
		}
	}
	else if (mod_insert=='a'){
		cout <<"Modul de inserare a datelor selectat este: \"automat\""<<endl;
		srand(time(0));
		a=rand()%50;
		b=rand()%50;
		c=rand()%50;
		cout <<"a="<<a<<" b = "<<b<<" c = "<<c<<endl;
		R=a+b-c;
		cout <<"Valoarea datelor inserate automat R = "<<R<<endl;	
	}
	else {
		cout <<"Ati introdus o valoarea gresita pentru modul de inserare a datelor primare!!!\nMai incercati inca o data."<<endl;
	}
	
	return 0;
}
