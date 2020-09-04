
struct stud
{
	char nume[255];
	char prenume[255];
	int varsta;
	int IDNP;
	char grupa[255];
	int id;
	char frecventa[255];
	bool status;
	double media;	
	char emailStud[255];
	
}STUD[1000];
struct stud1
{
	char nume[255];
	char prenume[255];
	int varsta;
	int IDNP;
	char grupa[255];
	int id;
	char frecventa[255];
	bool status;
	double media;	
	char emailStud[255];
	
}STUD1[1000];

struct statistica
{
	int id;
	int auth;
	int insertedUsers;
	int insertedStud;
	int editedStud;
	int inactUser;
	
}STAT[1000];

struct user
{
	char pass[255];
	char userID[255];
	int id;
	char controlQ[255];
	char controlR[255];
	bool status;
	bool type;	
	char emailUser[255];
	
}CONT[1000];
struct user1
{
	char pass[255];
	char userID[255];
	int id;
	char controlQ[255];
	char controlR[255];
	bool status;
	bool type;	
	char emailUser[255];
	
}CONT1[1000];

char name[255],pass[255],username[255],mail[255],studname[255],studfname[255],grupa[255],studChar[255],fileName[255];
FILE *fp;
int FRONT=NULL,BACK=NULL,NIVEL=1,userNumber=1,studNumber=0,studInt,idnp,userid,User_Iter;
bool status,userType;

char FNuser[255];
char FNstud[255];
char FNstat[255];
int Nuser=0,Nstud=0,Nstat=0;
