int meniuU()
{
	cout<<"\t\t*****MENU User baza *****"<<endl;
	cout<<"\t\t 1. Show student"<<endl;
	cout<<"\t\t 2. Find student"<<endl;
	cout<<"\t\t 3. Edit student"<<endl;
	cout<<"\t\t 4. Report"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: NIVEL=13; return 0;
		case 50: NIVEL=14; return 0;
		case 51: NIVEL=15; return 0;
		case 52: NIVEL=16; return 0;
		case 27: return 77777;	
	}
}
int meniuU13()
{
	cout<<"\t\t*****SUBMENU Show student*****"<<endl;
	cout<<"\t\t 1. Show active students"<<endl;
	//cout<<"\t\t 2. Show inactive students"<<endl;
	//cout<<"\t\t 3. Show all students"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: return 131;
		//case 50: return 132;
		//case 51: return 133;
		case 27: NIVEL=1; return 0;	
	}
}

int meniuU14()
{
	cout<<"\t\t*****SUBMENU Find student*****"<<endl;
	cout<<"\t\t 1. Find by name"<<endl;
	cout<<"\t\t 2. Find by first name"<<endl;
	cout<<"\t\t 3. Find by IDNP"<<endl;
	cout<<"\t\t 3. Find by group"<<endl;
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

int meniuU15()
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
		case 27: NIVEL=1; return 0;	
	}
}
int meniuU16()
{
	cout<<"\t\t***** REPORT *****"<<endl;
	cout<<"\t\t 1. Rapoarte studenti"<<endl;
	cout<<"\t\t 2. Rapoarte statistice"<<endl;
	cout<<"\t\t ESC. Iesire"<<endl;
	switch(_getch())
	{
		case 49: NIVEL=161; return 0;
		case 50: return 163;
		case 27: NIVEL=1; return 0;	
	}
}
int meniuU161()
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

int managementMeniuUser()
{
	switch(NIVEL)
		{
			case 1: return meniuU();

			
			case 13: return meniuU13();//Show Students
			case 131: ;//Show active students
			case 132: ;//Show inactive students
			case 133: ;//Show all students
			
			case 14: return meniuU14();//Find students
			case 141: ;//Find by name
			case 142: ;//Find by firstname
			case 143: ;//Find by IDNP
			case 144: ;//Find by group
			
			case 15: return meniuU15();//Edit students
			case 151: ;//Find by name
			case 152: ;//Edit name
			case 153: ;//Edit first name
			case 154: ;//Edit varsta
			case 155: ;//Edit IDNP
			case 156: ;//Edit group
			case 157: ;//Edit frecventa
			case 158: ;//Edit status
			case 159: ;//Edit mail
			
			case 16: return meniuU16();//Rapoarte
			case 161: return meniuU161();//Rapoarte studenti
			
		}
}
