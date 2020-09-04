#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main()
{
char password[]="step";
char pass[255];
int i=0,C=0,SEC=10;

cout<<"\n\n\n\t[0] Enter password::";
while(1){
	pass[i]=_getch();
	if (int(pass[i])==8){
		if(i>0){
			cout<<"\b \b";//rescrierea unei stelute afisata in parola
			i--;
		}
	}
	else if (int(pass[i])==13){
		pass[i]=0;
		if (strcmp(password,pass)==0){cout<<" Password OK"<<endl;break;	}
		else {
			cout<<" Password ERROR"<<endl;//system("pause");
			i=0;
			C++;
			
			if(C%3==0){
				for (int i=0;i<SEC;i++){
					system("cls");
					i<10?cout<<" 00:00:0"<<i:cout<<" 00:00:"<<i;
					Sleep(100);
				}if (SEC==60){
						system("cls");
						cout<<"You have entered wrong password "<<C<<" times";
						exit(0);
					}
				SEC+=10;
			}
		}
			system("cls");
			cout<<"\n\n\n\t["<<C<<"] Enter password::";
	}
	else{
		cout<<'*';
		i++;
	}	
}
system("cls");
cout<<"START"<<endl;
return 0;
}
