#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main()
{
	char s1[]="Step 2019";
	char s2[255],b[255];
	int i=0,s1len =0,s2len=0,scmp,blen;
	char a;
	bool found;
	
	cout<<"s1 = "<<s1<<endl;
  	while(s1[i]!=0)
  	{
  		i++;
  		s1len=i;
  	}
	cout<<"strlen s1="<<s1len<<endl;	
	i=0;
	while(s1[i]!=0&&i<=sizeof(s2))
	{
		s2[i]=s1[i];
		i++;
		s2len=i;
	}
	s2[i]=0;
	cout<<"strcpy s2="<<s2<<endl;
	
	if (s1len>s2len) scmp=-1;
	else if (s1len<s2len)scmp=1;
	else {
		for (int i=0;i<sizeof(s1);i++){
			if(s1[i]==s2[i]){scmp=0;}
			else {
				scmp=2;break;
			} 
		}	
	}
	if (scmp==2){cout<<"Sirurile sunt egale ca lungime, dar difera literele"<<endl;} 
	else cout<<"strcmp ="<<scmp<<". Sirul s1 este "<<(scmp==0 ? " egal cu " : scmp==1 ? " mai mic decat " : " mai mare decat ")<<" s2."<<endl;	
	
	i=0;
	while(s1[i]!=0&&i+s2len<=sizeof(s2))
	{
		s2[i+s2len]=s1[i];
		i++;
	}
	cout<<"strcat s2="<<s2<<endl;
	
	cout<<"Enter a value to search:";
	cin>>a;
	found=false;
	i=0;
	for (int i=0;i<s1len;i++){
		if(s1[i]==a) {
			found = true;
			break;
		}
	}
	cout<<"strchr="<<(found==0?"false":"true")<<endl;
	
	found=false;
	cout<<"Enter a string to search :";
	cin>>b;
	i=0;
	  	while(b[i]!=0)
  	{
  		i++;
  		blen=i;
  	}
	i=0;
	for (int i=0;i<s1len;i++){
		if(s1[i]==b[0]) {
			for(int k=0;k<blen;k++)
				if ((b[k]==s1[i+k])&&blen>1){
					found = true;
				}else {
					found =false; break;
				}
		}
	}cout<<"strstr="<<(found==0?"false":"true")<<endl;
return 0;
}
