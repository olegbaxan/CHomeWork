#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main()
{
char password[]="Admin",pass[255],username[]="Admin",userlog[255];
int i=0,C=0,SEC=10;
bool found=0;

cout<<"\n\n\n\t[0] Enter username::";

while(!found){
	userlog[i]=_getch();
	if (int(userlog[i])==8){
		if(i>0){
			cout<<"\b \b";//rescrierea unei stelute afisata in parola
			i--;
		}
	}
	else if (int(userlog[i])==13){
		userlog[i]=0;
		for (int i=0;i<4;i++){
			//if (strcmp(S[i].userID,userlog)==0){system("cls");cout<<" User found"<<endl;break;	}
			if (strcmp(username,userlog)==0){system("cls");cout<<" User found"<<endl;found=1;}
			else {system("cls");cout<<" User not found"<<endl;found=0;//exit(0);//system("pause");
			//i=0;
			//C++;
			}
		
		}
		system("cls");
		cout<<"\n\n\n\t["<<C<<"] Enter username::";
	}
	else if (int(userlog[i])==27){exit(0);}
	else{
		cout<<userlog[i];
		i++;
	}	

}
system("cls");
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
		//for ()
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
cout<<"START"<<userlog<<endl;
return 0;
}
