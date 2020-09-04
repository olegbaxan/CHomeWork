int meniuA()
{
	cout<<"\t\t*****MENU Admin baza*****"<<endl;
	cout<<"\t\t 1. Management user"<<endl;
	cout<<"\t\t 2. Insert student"<<endl;
	cout<<"\t\t 3. Show student"<<endl;
	cout<<"\t\t 4. Find student"<<endl;
	cout<<"\t\t 5. Edit student"<<endl;
	cout<<"\t\t 6. Report"<<endl;
	cout<<"\t\t 7. Change DB"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
		{
			case 49: NIVEL=11; return 0;
			case 50: return 12;
			case 51: NIVEL=13; return 0;
			case 52: NIVEL=14; return 0;
			case 53: NIVEL=15; return 0;
			case 54: NIVEL=16; return 0;
			case 55: return 17;
			case 27: return 7777;	
		}
}
int meniuA11()
{
	cout<<"\t\t*****SUBMENU Management user*****"<<endl;
	cout<<"\t\t 1. Insert user"<<endl;
	cout<<"\t\t 2. Edit user"<<endl;
	cout<<"\t\t 3. Show user"<<endl;
	cout<<"\t\t 4. Find user"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: return 111;
		case 50: NIVEL =112 ;return 0;
		case 51: return 113;
		case 52: NIVEL =114; return 0;
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
		case 49: return 1121;
		case 50: return 1122;
		case 51: return 1123;
		case 27: NIVEL=11; return 0;	
	}
}
int meniuA114()
{
	cout<<"\t\t*****SUBMENU Find user*****"<<endl;
	cout<<"\t\t 1. Find by username"<<endl;
	cout<<"\t\t 2. Find by email"<<endl;
	cout<<"\t\t 3. Find by type"<<endl;
	cout<<"\t\t 4. Find by status"<<endl;
	cout<<"\t\t 5. Find by id"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: return 1141;
		case 50: return 1142;
		case 51: return 1143;
		case 52: return 1144;
		case 53: return 1145;
		case 27: NIVEL=11; return 0;	
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
		case 49: return 131;
		case 50: return 132;
		case 51: return 133;
		case 27: NIVEL=1; return 0;	
	}
}
int meniuA14()
{
	cout<<"\t\t*****SUBMENU Find student*****"<<endl;
	cout<<"\t\t 1. Find by name"<<endl;
	cout<<"\t\t 2. Find by first name"<<endl;
	cout<<"\t\t 3. Find by IDNP"<<endl;
	cout<<"\t\t 4. Find by group"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: return 141;
		case 50: return 142;
		case 51: return 143;
		case 52: return 144;
		case 27: NIVEL=1; return 0;	
	}
}
int meniuA15()
{
	cout<<"\t\t*****SUBMENU Edit student*****"<<endl;
	cout<<"\t\t 1. Edit name"<<endl;
	cout<<"\t\t 2. Edit first name"<<endl;
	cout<<"\t\t 3. Edit varsta"<<endl;
	cout<<"\t\t 4. Edit IDNP"<<endl;
	cout<<"\t\t 5. Edit group"<<endl;
	cout<<"\t\t 6. Edit frecventa"<<endl;
	cout<<"\t\t 7. Edit status"<<endl;
	cout<<"\t\t 8. Edit media"<<endl;
	cout<<"\t\t 9. Edit mail"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: return 151;
		case 50: return 152;
		case 51: return 153;
		case 52: return 154;
		case 53: return 155;
		case 54: return 156;
		case 55: return 157;
		case 56: return 158;
		case 57: return 159;
		//case 58: return 159;
		case 27: NIVEL=1; return 0;	
	}
}
int meniuA16()
{
	cout<<"\t\t***** REPORT *****"<<endl;
	cout<<"\t\t 1. Rapoarte studenti"<<endl;
	cout<<"\t\t 2. Rapoarte statistice"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: NIVEL=161; return 0;
		case 50: return 162;
		case 27: NIVEL=1; return 0;	
	}
}
int meniuA161()
{
	cout<<"\t\t***** REPORT *****"<<endl;
	cout<<"\t\t 1. Lista dupa varsta"<<endl;
	cout<<"\t\t 2. Lista dupa grupa"<<endl;
	cout<<"\t\t 3. Lista studentilor"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: return 1611;
		case 50: return 1612;
		case 51: return 1613;
		case 27: NIVEL=16; return 0;	
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
			case 151: ;//Find by name
			case 152: ;//Edit name
			case 153: ;//Edit first name
			case 154: ;//Edit varsta
			case 155: ;//Edit IDNP
			case 156: ;//Edit group
			case 157: ;//Edit frecventa
			case 158: ;//Edit status
			case 159: ;//Edit mail
			
			case 16: return meniuA16();//Rapoarte
			case 161: return meniuA161();//Rapoarte studenti
			case 162: ;//Rapoarte statistice
		
		}
}

