#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
void main()
{
  int Key; float y,x;
  clrscr();
  printf("\tIntrodu cazul: ");
  scanf("%d",&Key);
  switch(Key)
  {
   case 1 : //for
    {  
     int a,b,X,Y,interval=0; float sum=0;
     printf("Introdu a si b :\n");
     scanf("%d%d",&a,&b);
     printf("Interval min 12:\n");
     scanf("%d%d",&X,&Y);
     printf("\n  -------RESULT------");
     printf("\n Interval---REZ-----\n");    
     for(int i=X; i<Y; i++)
         {
           int REZ=pow(a,2)+pow(i,2);
           printf("    |    %d ",i);
           printf(" - ");
           printf(" %d \n",REZ);interval++;
           sum+=REZ;
         }
           printf("\n--------------\n");
           printf("Interval: %d", interval);
           printf("\nTotal REZ: %f",sum);
          getch();break;}//end case 1
    case 2 : // while
     {/*corpul functiei while*/ break;}
    case 3 : //do while
     {/*corpul functiei do while*/ break;}
    case 0: exit(0);
   }}

