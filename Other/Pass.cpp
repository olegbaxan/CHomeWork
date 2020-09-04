#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


string getpass(const char *prompt, bool show_asterisk=true)
{
  const char BACKSPACE=8;
  const char RETURN=13;

  string password;
  unsigned char ch=0;

  cout <<prompt<<endl;

  while((ch=getch())!=RETURN)
    {
       if(ch==BACKSPACE)
         {
            if(password.length()!=0)
              {
                 if(show_asterisk)
                 cout <<"\b \b";
                 password.resize(password.length()-1);
              }
         }
       else if(ch==0 || ch==224) // handle escape sequences
         {
             getch(); // ignore non printable chars
             continue;
         }
       else
         {
             password+=ch;
             if(show_asterisk)
                 cout <<'*';
         }
    }
  cout <<endl;
  return password;
}


int main()
{
  const char *correct_password="null";

  string password=getpass("Please enter the password: ",true); // Show asterisks
  if(password==correct_password)
      cout <<"Correct password"<<endl;
  else
      cout <<"Incorrect password. Try again"<<endl;


  password=getpass("Please enter the password: ",false); // Do not show asterisks
  if(password==correct_password)
      cout <<"Correct password"<<endl;
  else
      cout <<"Incorrect password. Try again"<<endl;

  return 0;
}
