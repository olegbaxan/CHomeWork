using namespace std;

char* nume(char *name)
{	char letter[255];
	name[0]=0;
	for (int i=0;i<5;i++){
		letter[i]=(char)rand()%3+67;
		if(i==4){letter[5]='\0'	;}
	}
	strcat(name,"E:\\__Step\\");
	strcat(name,letter);
	strcat(name,".txt");
	cout<<"Name = "<<name<<endl;
	return name;
}

int meniuA()
{
	cout<<"\t\t*****MENU Admin baza*****"<<endl;
	cout<<"\t\t 1. Management user"<<endl;
	cout<<"\t\t 2. Insert student"<<endl;
	cout<<"\t\t 3. Show student"<<endl;
	cout<<"\t\t 4. Find student"<<endl;
	cout<<"\t\t 5. Edit student"<<endl;
	//cout<<"\t\t 6. Report"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49: NIVEL=11; return 0;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: return 7777;	
		}
}
int meniuA11()
{
	cout<<"\t\t*****SUBMENU Management user*****"<<endl;
	cout<<"\t\t 1. Insert user"<<endl;
	cout<<"\t\t 2. Show user"<<endl;
	cout<<"\t\t 3. Find user"<<endl;
	cout<<"\t\t 4. Edit user"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int meniuA112()
{
	cout<<"\t\t*****SUBMENU Edit user*****"<<endl;
	cout<<"\t\t 1. Change mail"<<endl;
	cout<<"\t\t 2. Change password"<<endl;
	cout<<"\t\t 3. Change status"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int meniuA114()
{
	cout<<"\t\t*****SUBMENU Find user*****"<<endl;
	cout<<"\t\t 1. Find by username"<<endl;
	cout<<"\t\t 2. Find by email"<<endl;
	cout<<"\t\t 3. Find by type"<<endl;
	cout<<"\t\t 3. Find by status"<<endl;
	cout<<"\t\t 3. Find by id"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int meniuA13()
{
	cout<<"\t\t*****SUBMENU Show student*****"<<endl;
	cout<<"\t\t 1. Show active students"<<endl;
	cout<<"\t\t 2. Show inactive students"<<endl;
	cout<<"\t\t 3. Show all students"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int meniuA14()
{
	cout<<"\t\t*****SUBMENU Find student*****"<<endl;
	cout<<"\t\t 1. Find by name"<<endl;
	cout<<"\t\t 2. Find by first name"<<endl;
	cout<<"\t\t 3. Find by IDNP"<<endl;
	cout<<"\t\t 3. Find by group"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int meniuA15()
{
	cout<<"\t\t*****SUBMENU Edit student*****"<<endl;
	cout<<"\t\t 1. Find by name"<<endl;
	cout<<"\t\t 2. Find by first name"<<endl;
	cout<<"\t\t 3. Find by IDNP"<<endl;
	cout<<"\t\t 3. Find by group"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}

int meniuU()
{
	cout<<"\t\t*****MENU User baza *****"<<endl;
	cout<<"\t\t 1. Find student"<<endl;
	cout<<"\t\t 2. Show student"<<endl;
	cout<<"\t\t 3. Edit student"<<endl;
	//cout<<"\t\t 4. Report"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49:  break;
		//case 50: {system("cls"); show(S,5);system("pause");} break;
		//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
		case 27: NIVEL=1; return 0;	
	}
}
int meniuU11()
{
	cout<<"\t\t*****SUBMENU Find student*****"<<endl;
	cout<<"\t\t 1. Find by name"<<endl;
	cout<<"\t\t 2. Find by first name"<<endl;
	cout<<"\t\t 3. Find by IDNP"<<endl;
	cout<<"\t\t 3. Find by group"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int meniuU12()
{
	cout<<"\t\t*****SUBMENU Show student*****"<<endl;
	cout<<"\t\t 1. Show active students"<<endl;
	cout<<"\t\t 2. Show inactive students"<<endl;
	cout<<"\t\t 3. Show all students"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int meniuU13()
{
	cout<<"\t\t*****SUBMENU Edit student*****"<<endl;
	cout<<"\t\t 1. Find by name"<<endl;
	cout<<"\t\t 2. Find by first name"<<endl;
	cout<<"\t\t 3. Find by IDNP"<<endl;
	cout<<"\t\t 3. Find by group"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49:  break;
			//case 50: {system("cls"); show(S,5);system("pause");} break;
			//case 51: {system("cls"); cautaNUME(S,5);system("pause");} break;
			case 27: NIVEL=1; return 0;	
		}
}
int managementMeniuAdmin()
{
	switch(NIVEL)
		{
			case 1: return meniuA();
			
			case 11: return meniuA11();//Management User
			case 111: ;//Insert Users
			case 112: return meniuA112();//Edit User
			case 1121: ;//Change mail
			case 1122: ;//Change password
			case 1123: ;//Change status
		
			case 113: ;//Show User
			case 114: return meniuA114();//Find user
			case 1141: ;//Find by username
			case 1142: ;//Find by email
			case 1143: ;//Find by type
			case 1144: ;//Find by status
			case 1145: ;//Find by id
			
			case 12:  ;//Insert Students
			
			case 13: return meniuA13();//Show Students
			case 131: ;//Show active students
			case 132: ;//Show inactive students
			case 133: ;//Show all students
			
			case 14: return meniuA14();//Find students
			case 141: ;//Find by name
			case 142: ;//Find by firstname
			case 143: ;//Find by IDNP
			case 144: ;//Find by group
			
			case 15: return meniuA15();//Edit students
			case 151: ;//Find student 
			case 152: ;//Edit name
			case 153: ;
			case 154: ;
			case 155: ;
			case 156: ;
			case 157: ;
			case 158: ;
			case 159: ;
		}
}
int managementMeniuUser()
{
	switch(NIVEL)
		{
			case 1: return meniuU();
			
			case 11: return meniuU11();//Find students
			case 111: ;//Find by name
			case 112: ;//Find by firstname
			case 113: ;//Find by IDNP
			case 114: ;//Find by group

			case 12: return meniuU12();//Show Students
			case 121: ;//Show active students
			case 122: ;//Show inactive students
			case 123: ;//Show all students
		
			case 13: return meniuU13();//Edit students
			case 131: ;
			case 132: ;
			case 133: ;
			case 134: ;
			case 135: ;
			case 136: ;
			case 137: ;
			case 138: ;
			case 139: ;
			
		}
}
