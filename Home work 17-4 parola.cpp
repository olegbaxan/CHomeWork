#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{
	string pass1="";
	string pass2="";
	char ch1,ch2;
	int c=0;
	do {
		system("cls");
		if(c==0){
			cout<<"Inserati parola:";
		}
		else {
			cout<<"Parolele inserate nu coincid, Va rog sa mai repetati"<<endl; cout<<"Inserati parola:";

		}	//Recunosc ca paartea asta m-am inspirat de aici http://www.cplusplus.com/forum/general/3570/	
		   ch1 = _getch();
   			while(ch1 != 13){//character 13 is enter
				pass1.push_back(ch1);
      			cout << '*';
      			ch1 = _getch();
      			
   			}
		cout<<"\nInserati repetat parola:";
		 	ch2 = _getch();
		 	
   			while(ch2 != 13){//character 13 is enter
				pass2.push_back(ch2);
      			cout << '*';
      			ch2 = _getch();
      			
   			}
		c++;
	}
	while(pass1!=pass2);


cout<<"\nparola = "<<pass1<<endl;


return 0;
}
