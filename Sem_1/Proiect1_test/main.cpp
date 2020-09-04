#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

#include "structuri.cpp"
#include "sursa.cpp"
#include "meniuA.cpp"
#include "meniuU.cpp"
//#include "User.cpp"


int main()
{
	srand(time(0));
	//nume(name);
	
	config();
	Nuser=load(CONT,FNuser);fclose(fp);
	Nstud=load(STUD,FNstud);fclose(fp);
	Nstat=load(STAT,FNstat);fclose(fp);
	
	FRONT=login(CONT,Nuser);
	//FRONT=1;
	while (1)
	{	system("cls");
		switch(FRONT)
		{
			case 1: BACK=managementMeniuAdmin();break;
			case 0: BACK=managementMeniuUser();break;
		}
		switch(BACK)
		{
			case 111: Nuser=insertUser(CONT,Nuser);fclose(fp);break;
			case 1121: changeMail(CONT,Nuser);break;
			case 1122: changePass(CONT,Nuser);break;
			case 1123: changeStatus(CONT,Nuser);break;
			case 113: show(CONT,Nuser);break;
			case 1141: findUser(1);break;//findUserName();
			case 1142: findUser(2);break;//findUserMail();
			case 1143: findUser(3);break;//findUserType();
			case 1144: findUser(4);break;//findUserStatus();
			case 1145: findUser(5);break;//findUserID();
			case 12: Nstud=insertStud(STUD,Nstud);fclose(fp);break;
			case 131: showStudents(1);break;//showActStud();
			case 132: showStudents(2);break;//showInaStud();
			case 133: showStudents(3);break;//showStud(STUD,Nstud);break;
			case 141: findStud(1);break;
			case 142: findStud(2);break;
			case 143: findStud(3);break;
			case 144: findStud(4);break;
			case 151: editStud(1);break;//editStudName();
			case 152: editStud(2);break;//editStudFName();
			case 153: editStud(3);break;//editStudYear();
			case 154: editStud(4);break;//editStudIDNP();
			case 155: editStud(5);break;//editStudGroup();
			case 156: editStud(6);break;//editStudFrec();
			case 157: editStud(7);break; //editStudStatus();
			case 158: editStud(8);break; //editStudMedia();
			case 159: editStud(9);break; //editStudMail();	
			case 1611: showAllStudentsVasrta();break;//Rapoarte studenti dupa varsta;
			case 1612: showAllStudentsGroup();break;//Rapoarte studenti dupa grupa;
			case 1613: showAllStudents();break;//Rapoarte studenti;	
			case 162: stat(1);break;//Rapoarte statistice Admin;
			case 163: stat(2);break;//Rapoarte statistice User;	
			case 17: changeDB();break;//open config.ini & change input file		
			case 7777: {save(CONT,FNuser,Nuser);save(STUD,FNstud,Nstud);save(STAT,FNstat,Nstat);exit(0);}
			case 77777: {save(STUD,FNstud,Nstud);save(STAT,FNstat,Nstat);exit(0);}
		}	
	}
	
	return 0;
}
