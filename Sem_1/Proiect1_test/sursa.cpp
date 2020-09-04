using namespace std;
template<typename T>
int	load(T st[],char FN[])
{
	int N;
	fp=fopen(FN,"r+b");
	if(fp==NULL){cout<<"Error"<<endl;}
	else{cout<<"OK creat"<<endl;
		N=fread(st,sizeof(T),1000,fp);
	}
	//cout<<"OK creat N="<<N<<endl;
	return N;
}
template<typename T>
void save(T st[],char FN[],int n)
{
	fp=fopen(FN,"w+b");
	fwrite(st,sizeof(T),n,fp);
	fclose(fp);
}

void config()
{
	if((fp=fopen("config.ini","r+"))==NULL){cout<<"Error"<<endl;}
	else{cout<<"OK creat"<<endl;}
	
	fscanf(fp,"%s",&FNuser);
	fscanf(fp,"%s",&FNstud);
	fscanf(fp,"%s",&FNstat);
	//cout<<"user="<<FNuser<<", stud="<<FNstud<<", stat="<<FNstat<<endl;
	//system("pause");
	fclose(fp);
}

void changeDB()
{
	system("config.ini");
	config();
	Nuser=load(CONT,FNuser);fclose(fp);
	Nstud=load(STUD,FNstud);fclose(fp);
	Nstat=load(STAT,FNstat);fclose(fp);
}
void statInsert(int i)
{
	STAT[i].auth=0;
	STAT[i].insertedUsers=0;
	STAT[i].insertedStud=0;
	STAT[i].editedStud=0;
	STAT[i].inactUser=0;
	Nstat=i+1;
	//cout<<"Nstat="<<Nstat<<endl;system("pause");
}

void statAuth()
{
	STAT[User_Iter].auth++;
	//cout<<"Auth="<<STAT[User_Iter].auth<<endl;system("pause");
}
void statInsertU()
{
	STAT[User_Iter].insertedUsers++;
	//cout<<"InsertUser="<<STAT[User_Iter].insertedUsers<<endl;system("pause");
}
void statInsertS()
{
	STAT[User_Iter].insertedStud++;
	//cout<<"InsertStud="<<STAT[User_Iter].insertedStud<<endl;system("pause");
}
void statEdit()
{
	STAT[User_Iter].editedStud++;
	//cout<<"EditStud="<<STAT[User_Iter].editedStud<<endl;system("pause");
}
void statInactUser()
{
	STAT[User_Iter].inactUser++;
	//cout<<"InactUser="<<STAT[User_Iter].inactUser<<endl;system("pause");
}

int login(user S[],int n){

int i=0,C=0,SEC=10,type=-1;
bool found=0;
cout<<"\n\n\n\t[0] Enter username::";
while(!found){
	username[i]=_getch();
	if (int(username[i])==8){
		if(i>0){
			cout<<"\b \b";//rescrierea unei litere afisata in username
			i--;
		}
	}
	else if (int(username[i])==13){
		username[i]=0;
		//cout<<"Username="<<S[iter].userID<<", User="<<username<<endl;system("pause");
		for (int i=0;i<n;i++){
			if ((strcmp(S[i].userID,username)==0)&&S[i].status==1){system("cls");cout<<" User found and is Active"<<endl;found=1;User_Iter=i;break;}
			else {system("cls");cout<<" User not found"<<endl;found=0;
			}
		}
		system("cls");
		cout<<"\n\n\n\tUsername Not Found, Enter new username::";
	}
	else if (int(username[i])==27){exit(0);}
	else{
		cout<<username[i];
		i++;
	}	
}i=0;
system("cls");
if(found){
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
		
		//cout<<"Username="<<S[iter].userID<<", Pass1="<<S[iter].pass<<", pass="<<pass<<endl;system("pause");
		if (strcmp(S[User_Iter].pass,pass)==0){cout<<" Password OK"<<endl;type=S[User_Iter].type;statAuth();break;}
		else {
			cout<<" Password ERROR"<<endl;
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
	else if (int(pass[i])==27){exit(0);}
	else{
		cout<<'*';
		i++;
	}	
}
}
return type;
}

template<typename T>
void password(T st[],int n)
{
	cout<<"Enter password ["<<n+1<<"]: ";
		
		int p=0; 
    	do{ 
        	pass[p]=getch(); 
        	if (int(pass[p])==8){
				if(p>0){
					cout<<"\b \b";//rescrierea unei stelute afisata in parola
			}}
			else if(int(pass[p])!=13){ 
            	cout<<'*'; 
        	}
        	p++; 
    	}while(int(pass[p-1])!=13); 
    	pass[p-1]='\0'; 
    	strcpy(st[n].pass,pass);
}

bool checkUserName(char user[255])
{	bool found=1;
	for (int i=0;i<Nuser;i++){
		if (strcmp(CONT[i].userID,user)==0)found=0;
	}
	return found;
}
int insertUser(user S[], int n)
{
	int i=n;
	do 
	{
		system("cls");
		cout<<"Enter userID ["<<i+1<<"]: ";
		cin>>username;
		if(checkUserName(username)){
		strcpy(S[i].userID,username);
		password(CONT,i);
		cout<<"\nEnter Control question ["<<i+1<<"]: ";
		cin>>S[i].controlQ;
		cout<<"Enter Control responce ["<<i+1<<"]: ";
		cin>>S[i].controlR;
		cout<<"Enter user status 0-Inactive, 1-Active ["<<i+1<<"]: ";
		cin>>S[i].status;
		cout<<"Enter user type 0-User, 1-Admin ["<<i+1<<"]: ";
		cin>>S[i].type;
		cout<<"Enter email ["<<i+1<<"]: ";
		cin>>S[i].emailUser;
		S[i].id=i+1;
		statInsert(i);
		statInsertU();
		i++;}
		else {cout<<"User: "<<username<<" exist";}
		cout<<"\nInsert user ESC - exit, anykey continue ..."<<endl;
	}while(_getch()!=27);
	return i;	
}

template<typename T>
void show(T S[], int n)
{	int a=0,pas=5,page=1;
	while(1)
	{	system("cls");
		cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
		cout<<char(186)<<"Nr. "<<char(179)<<"  userID  "<<char(179)<<" id  "<<char(179)<<" type  "<<char(179)<<" status "<<char(179)<<"   email          "<<char(186)<<endl;
		cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;

	
	for(int i=a;(i<(a+pas)&&(i<n));i++){
		cout<<char(186)<<char(0)<<char(0)<<setw(2)<<i+1<<char(179)<<setw(10)<<S[i].userID<<char(179)<<setw(5)<<S[i].id<<char(179)<<setw(7)<<S[i].type<<char(179)<<setw(8)<<S[i].status<<char(179)<<setw(18)<<S[i].emailUser<<char(186)<<endl;
		if(i<(a+pas-1)&&(i<n-1)){
			cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;
		}
		else if((i==(a+pas)-1)||i==n-1){
			cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
		}
	}
		cout<<"\t\t Page "<<page<<" of "<<(n%pas==0 ? n/pas:(n/pas)+1)<<endl;
		int Key=(_getch());
		if(Key=='+'){a+=pas;page++;if(a>=n){a-=pas;page--;};if(page>n/pas+1){n%2==0 ? page=n/pas:(n/pas)+1;page--;}}
		else if (Key=='-'){a-=pas;page--;if(a<0){a=0;};if(page==0)page=1;}
		else if (Key==27){break;}
	}
}
void findUser(int x){
	bool numex=0,mailx=0,typex=0,statx=0,idx=0;
	int j=0;
	switch(x){
		
		case 1:{cout<<"Enter name to search"<<endl;cin>>username;numex=1;}break;
		case 2:{cout<<"Enter mail to search"<<endl;cin>>mail;mailx=1;}break;
		case 3:{cout<<"Enter type to search"<<endl;cin>>type;typex=1;}  break;
		case 4:{cout<<"Enter status to search"<<endl;cin>>status;statx=1;}  break;
		case 5:{cout<<"Enter id to search"<<endl;cin>>userid;idx=1;}  break;
	}
	
	for(int i=0;i<Nuser;i++)
	{	
		if(((numex==1)&&(strcmp(CONT[i].userID,username)==0))||((mailx==1)&&(strcmp(CONT[i].emailUser,mail)==0))||((typex==1)&&(CONT[i].type==type))||((statx==1)&&(CONT[i].status==status))||((idx==1)&&(CONT[i].id==userid))){

		strcpy(CONT1[j].userID,CONT[i].userID);
		CONT1[j].type=CONT[i].type;
		CONT1[j].status=CONT[i].status;
		strcpy(CONT1[j].emailUser,CONT[i].emailUser);
		CONT1[j].id=CONT[i].id;
		j++;
		}
	}
	show(CONT1,j);
	
}
template<typename T>
void changeMail(T S[], int n)
{
	cout<<"You want to change email? ESC - exit, anykey continue ..."<<endl;
	if(_getch()!=27){
		cout<<"Please enter user name to change"<<endl;
		cin>>username;
		for (int i=0;i<n;i++){
			if (strcmp(S[i].userID,username)==0){
				cout<<" User "<<username<<" has mail "<<S[i].emailUser<<endl;system("pause");
				cout<<"Enter new mail: ";
				cin>>mail;
				strcpy(S[i].emailUser,mail);
		}
	};	
}
}
template<typename T>
void changePass(T S[], int n)
{
	cout<<"You want to change Password? ESC - exit, anykey continue ..."<<endl;
	if(_getch()!=27){
		cout<<"Please enter user name to change"<<endl;
		cin>>username;
		for (int i=0;i<n;i++){
			
			if (strcmp(S[i].userID,username)==0){
				cout<<" You will change password for "<<username<<endl;system("pause");
				//cout<<"Enter new password: ";
				//cin>>pass;
				//strcpy(S[i].pass,pass);
				password(CONT,i);
			}
	};
}
}
template<typename T>
void changeStatus(T S[], int n)
{
	cout<<"You want to change Status? ESC - exit, anykey continue ..."<<endl;
	if(_getch()!=27){
		cout<<"Please enter user name to change"<<endl;
		cin>>username;
		for (int i=0;i<n;i++){
			if (strcmp(S[i].userID,username)==0){
				cout<<" User "<<username<<" has Status "<<S[i].status<<" - "<<(S[i].status==1 ? "Active":"Inactiv")<<endl;system("pause");
				cout<<"Enter new status: ";
				cin>>status;
				S[i].status=status;
				if (status==0)statInactUser();
		}
	};	
}
}

bool checkStudName(int idnp)
{	bool found=1;
	for (int i=0;i<Nstud;i++){
		if (STUD[i].IDNP==idnp)found=0;
	}
	return found;
}
int insertStud(stud S[], int n)
{
	int i=n;
	do 
	{
		system("cls");
		
		cout<<"Enter IDNP student ["<<i+1<<"]: ";//de creat o functie aparte la verificarea IDNP do..while if(validIDNP())
		cin>>studNumber;
		if (checkStudName(studNumber)){
		S[i].IDNP=studNumber;
		cout<<"Enter nume student ["<<i+1<<"]: ";
		cin>>S[i].nume;
		cout<<"Enter prenume student ["<<i+1<<"]: ";
		cin>>S[i].prenume;
		cout<<"Enter anul nasterii student ["<<i+1<<"]: ";
		cin>>S[i].varsta;
		cout<<"Enter grupa student ["<<i+1<<"]: ";
		cin>>S[i].grupa;
		cout<<"Enter frecventa student ["<<i+1<<"]: ";
		cin>>S[i].frecventa;
		cout<<"Enter student status 0-Inactive, 1-Active ["<<i+1<<"]: ";
		cin>>S[i].status;
		cout<<"Enter media student ["<<i+1<<"]: ";
		cin>>S[i].media;
		cout<<"Enter email student ["<<i+1<<"]: ";
		cin>>S[i].emailStud;
		S[i].id=i+1;
		statInsertS();
		i++;
		}
		else {cout<<"Student with this IDNP already exist"<<endl;system("pause");}	
		cout<<"\nInsert student ESC - exit, anykey continue ..."<<endl;
	}while(_getch()!=27);
	return i;	
}

template<typename T>
void showStud(T S[], int n)
{	int a=0,pas=5,page=1;

	while(1)
	{	system("cls");
		cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(209)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
		cout<<char(186)<<"Nr. "<<char(179)<<"   Nume   "<<char(179)<<" Prenume  "<<char(179)<<" varsta  "<<char(179)<<"  IDNP  "<<char(179)<<" Grupa  "<<char(179)<<" Frecventa "<<char(179)<<" status "<<char(179)<<" media  "<<char(179)<<"   email          "<<char(186)<<endl;
		cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;

	
	for(int i=a;(i<(a+pas)&&(i<n));i++){
		cout<<char(186)<<char(0)<<char(0)<<setw(2)<<i+1<<char(179)<<setw(10)<<S[i].nume<<char(179)<<setw(10)<<S[i].prenume<<char(179)<<setw(9)<<S[i].varsta<<char(179)<<setw(8)<<S[i].IDNP<<char(179)<<setw(8)<<S[i].grupa<<char(179)<<setw(11)<<S[i].frecventa<<char(179)<<setw(8)<<S[i].status<<char(179)<<setw(8)<<S[i].media<<char(179)<<setw(18)<<S[i].emailStud<<char(186)<<endl;
		if(i<(a+pas-1)&&(i<n-1)){
			cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(182)<<endl;
		}
		else if((i==(a+pas)-1)||i==n-1){
			cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(207)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
		}
	}
		cout<<"\t\t\t Page "<<page<<" of "<<(n%pas==0 ? n/pas:(n/pas)+1)<<endl;
		int Key=(_getch());
		if(Key=='+'){a+=pas;page++;if(a>=n){a-=pas;page--;};if(page>n/pas+1){n%2==0 ? page=n/pas:(n/pas)+1;page--;}}
		else if (Key=='-'){a-=pas;page--;if(a<0){a=0;};if(page==0)page=1;}
		else if (Key==27){break;}
	}
}


void editStud(int x)
{	cout<<"Please enter Students name to change"<<endl;
	cin>>studname;
	for (int i=0;i<Nstud;i++){
		if (strcmp(STUD[i].nume,studname)==0){//cout<<"x="<<x;system("pause");
	
	switch(x){
		case 1:{cout<<"You want to change student name? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<endl;system("pause");
			cout<<"Enter new student name: ";
			cin>>studChar;
			strcpy(STUD[i].nume,studChar);statEdit();
			}}break;
		case 2:{cout<<"You want to change student first name? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<" has first name "<<STUD[i].prenume<<endl;system("pause");
			cout<<"Enter new student first name: ";
			cin>>studChar;
			strcpy(STUD[i].prenume,studChar);statEdit();
			}}break;	
		case 3:{cout<<"You want to change student anul nasterii? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<" has varsta "<<STUD[i].varsta<<endl;system("pause");
			cout<<"Enter new student varsta: ";
			cin>>studInt;
			STUD[i].varsta=studInt;statEdit();
			}}break;
		case 4:{cout<<"You want to change student IDNP? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<" has IDNP "<<STUD[i].IDNP<<endl;system("pause");
			cout<<"Enter new student IDNP: ";
			cin>>studNumber;
			if (checkStudName(studNumber)){
				STUD[i].IDNP=studNumber;statEdit();}
			else {cout<<"Student with this IDNP already exist"<<endl;system("pause");}
			}}break;
		case 5:{cout<<"You want to change student group? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<" has group "<<STUD[i].grupa<<endl;system("pause");
			cout<<"Enter new student group: ";
			cin>>studChar;
			strcpy(STUD[i].grupa,studChar);statEdit();
			}}break;
		case 6:{cout<<"You want to change student frecventa? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<" has frecventa "<<STUD[i].frecventa<<endl;system("pause");
			cout<<"Enter new student frecventa: ";
			cin>>studChar;
			strcpy(STUD[i].frecventa,studChar);statEdit();
			}}break;
		case 7:{cout<<"You want to change student status? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<" has status "<<STUD[i].status<<" - "<<(STUD[i].status==1 ? "Active":"Inactiv")<<endl;system("pause");
			cout<<"Enter new student status: ";
			cin>>studInt;
			STUD[i].status=studInt;statEdit();
			}}break;
		case 8:{cout<<"You want to change student media? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			double m; 
			cout<<" User "<<studname<<" has media "<<STUD[i].media<<endl;system("pause");
			cout<<"Enter new student media: ";
			cin>>m;
			STUD[i].media=m;statEdit();
			}}break;
		case 9:{cout<<"You want to change student email? ESC - exit, anykey continue ..."<<endl;
			if(_getch()!=27){
			cout<<" User "<<studname<<" has email "<<STUD[i].emailStud<<endl;system("pause");
			cout<<"Enter new student email: ";
			cin>>studChar;
			strcpy(STUD[i].emailStud,studChar);statEdit();
			}}break;							
	}
}
}
}

void findStud(int x){
	bool numex=0,idnpx=0,fnumex=0,groupx=0;
	int j=0;
	switch(x){
		
		case 1:{cout<<"Enter name to search"<<endl;cin>>studname;numex=1;}break;
		case 2:{cout<<"Enter first name to search"<<endl;cin>>studfname;fnumex=1;}break;
		case 3:{cout<<"Enter IDNP to search"<<endl;cin>>idnp;idnpx=1;}  break;
		case 4:{cout<<"Enter group to search"<<endl;cin>>grupa;groupx=1;}  break;
	}
	
	for(int i=0;i<Nstud;i++)
	{	
		if(((numex==1)&&(strcmp(STUD[i].nume,studname)==0))||((fnumex==1)&&(strcmp(STUD[i].prenume,studfname)==0))||((groupx==1)&&(strcmp(STUD[i].grupa,grupa)==0))||((idnpx==1)&&(STUD[i].IDNP==idnp))){
		STUD1[j].IDNP=STUD[i].IDNP;
		strcpy(STUD1[j].nume,STUD[i].nume);
		strcpy(STUD1[j].prenume,STUD[i].prenume);
		STUD1[j].varsta=STUD[i].varsta;
		strcpy(STUD1[j].grupa,STUD[i].grupa);
		strcpy(STUD1[j].frecventa,STUD[i].frecventa);
		STUD1[j].status=STUD[i].status;
		STUD1[j].media=STUD[i].media;
		strcpy(STUD1[j].emailStud,STUD[i].emailStud);
		STUD1[j].id=STUD[i].id;
		j++;
		}
	}
	showStud(STUD1,j);	
}
void showStudents(int x){
	bool all=0,act=0,inact=0;
	int j=0;
	switch(x){
		
		case 1:{act=1;}break;
		case 2:{inact=1;}break;
		case 3:{all=1;}  break;
	}
	for(int i=0;i<Nstud;i++)
	{	
		if((all==1)||((act==1)&&(STUD[i].status==1))||((inact==1)&&(STUD[i].status==0))){
		STUD1[j].IDNP=STUD[i].IDNP;
		strcpy(STUD1[j].nume,STUD[i].nume);
		strcpy(STUD1[j].prenume,STUD[i].prenume);
		STUD1[j].varsta=STUD[i].varsta;
		strcpy(STUD1[j].grupa,STUD[i].grupa);
		strcpy(STUD1[j].frecventa,STUD[i].frecventa);
		STUD1[j].status=STUD[i].status;
		STUD1[j].media=STUD[i].media;
		strcpy(STUD1[j].emailStud,STUD[i].emailStud);
		STUD1[j].id=STUD[i].id;
		j++;
		}
	}
	//cout<<"act="<<act<<" inact= "<<inact<<" all="<<all<<" j="<<j;system("pause");
	showStud(STUD1,j);
}
void stat(int z)
{

fp=fopen("stat_raport.txt","w+");
fprintf(fp,"*****************************************************************************************************************************\n");
fprintf(fp,"*   Nume ID  *  User  *   Type   *   Status   *   Auth   *  Insert Users * Insert Students * Edit Students   *  Inac Users  *\n");
fprintf(fp,"*****************************************************************************************************************************\n");
if (z==2){
	int i=User_Iter;
	fprintf(fp,"*%11s * %6d * %8s * %10s * %5d    * %10d    * %7d         * %7d         * %8d     *\n",CONT[i].userID,CONT[i].id,(CONT[i].type==1 ? "Admin":"User"),(CONT[i].status==1 ? "Active":"Inactiv"),STAT[i].auth,STAT[i].insertedUsers,STAT[i].insertedStud,STAT[i].editedStud,STAT[i].inactUser);
}
else {for(int i=0; i<Nstat; i++)
	{	
		fprintf(fp,"*%11s * %6d * %8s * %10s * %5d    * %10d    * %7d         * %7d         * %8d     *\n",CONT[i].userID,CONT[i].id,(CONT[i].type==1 ? "Admin":"User"),(CONT[i].status==1 ? "Active":"Inactiv"),STAT[i].auth,STAT[i].insertedUsers,STAT[i].insertedStud,STAT[i].editedStud,STAT[i].inactUser);
	}
}
fprintf(fp,"*****************************************************************************************************************************\n");
fclose(fp);
cout<<" se lucreaza in raport"<<endl;
system("stat_raport.txt");

}

void showAllStudentsVasrta()
{
cout<<"1 - Active Students\n2 - Inactive Students\n3 - All Students\nPlease select type of students you want to see:";
cin>>studInt;
system("cls");
cout<<"Please enter Students varsta:";
cin>>studNumber;

	fp=fopen("Students_by_Varsta.txt","w+");
	fprintf(fp,"****************************************************\n");
	fprintf(fp,"*    Grupa   *     Nume    *   Prenume  *  Varsta  *\n");
	fprintf(fp,"****************************************************\n");
	switch(studInt){
		case 1:{
			for(int i=0; i<Nstud; i++)
			{if (STUD[i].status==1&&STUD[i].varsta==studNumber){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].varsta);}}break;}
		case 2:{
			for(int i=0; i<Nstud; i++)
			{if (STUD[i].status==0&&STUD[i].varsta==studNumber){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].varsta);}}break;}
		case 3:{
			for(int i=0; i<Nstud; i++)
			{	if (STUD[i].varsta==studNumber){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].varsta);}}break;}
	}
	fprintf(fp,"****************************************************\n");
	fclose(fp);
	cout<<" se lucreaza in raport"<<endl;
	system("Students_by_Varsta.txt");
}
void showAllStudentsGroup()
{
cout<<"1 - Active Students\n2 - Inactive Students\n3 - All Students\nPlease select type of students you want to see:";
cin>>studInt;
system("cls");
cout<<"Please enter Students group:";
cin>>grupa;

	fp=fopen("Students_by_Group.txt","w+");
	fprintf(fp,"****************************************************\n");
	fprintf(fp,"*    Grupa   *     Nume    *   Prenume  *   IDNP   *\n");
	fprintf(fp,"****************************************************\n");
	switch(studInt){
		case 1:{
			for(int i=0; i<Nstud; i++)
			{if (STUD[i].status==1&&(strcmp(STUD[i].grupa,grupa)==0)){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);}}break;}
		case 2:{
			for(int i=0; i<Nstud; i++)
			{if (STUD[i].status==0&&(strcmp(STUD[i].grupa,grupa)==0)){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);}}break;}
		case 3:{
			for(int i=0; i<Nstud; i++)
			{	if (strcmp(STUD[i].grupa,grupa)==0){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);}}break;}
	}
	fprintf(fp,"****************************************************\n");
	fclose(fp);
	cout<<" se lucreaza in raport"<<endl;
	system("Students_by_Group.txt");
}

void showAllStudents()
{
cout<<"1 - Active Students\n2 - Inactive Students\n3 - All Students\nPlease select type of students you want to see:";
cin>>studInt;

	fp=fopen("Active_Students.txt","w+");
	fprintf(fp,"****************************************************\n");
	fprintf(fp,"*    Grupa   *     Nume    *   Prenume  *   IDNP   *\n");
	fprintf(fp,"****************************************************\n");
	switch(studInt){
		case 1:{
			for(int i=0; i<Nstud; i++)
			{if (studInt==1&&STUD[i].status==1){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);}}break;}
		case 2:{
			for(int i=0; i<Nstud; i++)
			{if (STUD[i].status==0){fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);}}break;}
		case 3:{
			for(int i=0; i<Nstud; i++)
			{	fprintf(fp,"*%11s *  %10s * %10s * %7d  *\n",STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);}	break;}
	}
	fprintf(fp,"****************************************************\n");
	fclose(fp);
	cout<<" se lucreaza in raport"<<endl;
	system("Active_Students.txt");
}
