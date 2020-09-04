/*program desenare 3 patrate si nume in interior*/
#include<iostream>

using namespace std;


int main()
{
  cout<<"----------------------\n"<<"| ------------------ |\n"<<"| | -------------- | |\n"<<"| | |\t\t | | |\n"<<"| | |\t\t | | |\n"<<"| | | Baxan Oleg | | |\n"<<"| | |\t\t | | |\n"<<"| | |\t\t | | |\n"<<"| | -------------- | |\n"<<"| ------------------ |\n"<<"----------------------\n"<<endl;
  cout<<"**********************\n"<<"* ****************** *\n"<<"* * ************** * *\n"<<"* * *\t\t * * *\n"<<"* * *\t\t * * *\n"<<"* * * Baxan Oleg * * *\n"<<"* * *\t\t * * *\n"<<"* * *\t\t * * *\n"<<"* * ************** * *\n"<<"* ****************** *\n"<<"**********************\n"<<endl;
  
   return 0;
}

/*program de calcul dupa formula matematica*/
 
#include<iostream>

using namespace std;

int main()
{
int a=3,b=2,c=1;
cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
int R1=a+b;
cout<<"a+b="<<R1<<endl;
int R2=R1-c;
cout<<"R1-c="<<R2<<endl;
double R3=b/c;
cout<<"b/c="<<R3<<endl;
double R4=R3/a;
cout<<"R3/a="<<R4<<endl;
double R5=a/c;
cout<<"a/c="<<R5<<endl;
double R6=R4+R5;
cout<<"R4+R5="<<R6<<endl;
double R7=R2/R6;
cout<<"R2/R6="<<R7<<endl;
double R8=a/b;
cout<<"a/b="<<R8<<endl;
double R9=R7+R8;
cout<<"R7+R8="<<R9<<endl;
double R10=R9-c;
cout<<"R9-c="<<R10<<endl;
system("pause");
system("cls");
cout<<"Rezultat ecuatie este = "<<R10<<endl;

   return 0;
} 
