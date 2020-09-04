#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{

/*1+1=
1. 1 val
2. operatiunea
3. 2 val
4. =
+ 0
- 1 //cout<<" c= "<<c cout<<" b= "<<b;
* 2
/ 3
*/

int a=-1,o=-1,b=-1,c=0;
E:	
	switch(_getch())
	{
		case 48 : cout<<"0";a=0;c=c*10+a;break;
		case 49 : cout<<"1";a=1;c=c*10+a;break;
		case 50 : cout<<"2";a=2;c=c*10+a;break;
		case 51 : cout<<"3";a=3;c=c*10+a;break;
		case 52 : cout<<"4";a=4;c=c*10+a;break;
		case 53 : cout<<"5";a=5;c=c*10+a;break;
		case 54 : cout<<"6";a=6;c=c*10+a;break;
		case 55 : cout<<"7";a=7;c=c*10+a;break;
		case 56 : cout<<"8";a=8;c=c*10+a;break;
		case 57 : cout<<"9";a=9;c=c*10+a;break;
		case 42 : if(a!=-1&&o==-1){cout<<"*";o=2;b=c;a=-1,c=0;}break;
		case 43 : if(a!=-1&&o==-1){cout<<"+";o=0;b=c;a=-1,c=0;}break;
		case 47 : if(a!=-1&&o==-1){cout<<"/";o=3;b=c;a=-1,c=0;}break;
		case 45 : if(a!=-1&&o==-1){cout<<"-";o=1;b=c;a=-1,c=0;}break;
		case 61 : if(a!=-1&&o!=-1){cout<<"=";
			switch(o)
			{
				case 0 : cout<<b+c<<endl;c=0;break;
				case 1 : cout<<b-c<<endl;c=0;break;
				case 2 : cout<<b*c<<endl;c=0;break;
				case 3 : cout<<(double)b/c<<endl;c=0;break;
			}
		a=-1; b=-1; o=-1;}
		break;
		
		case 27 : exit(0);
		case 8 : cout<<"\b";
		
	}
goto E;



			
	return 0;
}

