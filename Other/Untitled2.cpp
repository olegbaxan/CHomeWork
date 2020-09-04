#include<stdio.h>
#include<conio.h>
#include<math.h>
# define Pi 3.14
main()
{ int k,key; float WD;
  printf("  MENIU  ");
  printf("\n 1 - Metoda if  ");
  printf("\n 2 - Metoda if-else  ");
  printf("\n 3 - Metoda if-else-if ");
  printf("\nIntrodu necunoscuta k:");
  scanf("%d",&k);
  printf("\nIntrodu cazul:");
  scanf("%d",&key);
 switch(key)
 {
  case 1:
   {
    if(k<1)
     { WD=sin(2/k);}
    if(k==1)
     { WD=1/k;}
    if(k>1)
     { WD=abs(pow(k,2))+Pi;}
     printf("Rezultatul WD=%f",WD); 
    break;
   }

  case 2:
   {
    if(k<1)
     { WD=sin(2/k);}
    else
     {printf("\nPentru k<1,nu sunt sol.");}

    if(k==1)
    { WD=1/k;}
    else
    {printf("\nPentru k=1,nu sunt sol.");}
   
    if(k>1)
    { WD=abs(pow(k,2))+Pi;}
    else
    {printf("\nPentru k>1,nu sunt sol.");}

    printf("\nRezultatul WD=%f",WD); 
    break;
   }
    case 3:
     {
      if(k<1)
      { WD=sin(2/k);}
      else
      {
       if(k==1)
        {WD=1/k;}
       else
        {WD=abs(pow(k,2))+Pi;}
      }
      printf("\nRezultatul WD=%f",WD);
      break;
     }
    default:{printf("\nNu este asa caz!");}
}//end switch 
getch();}

