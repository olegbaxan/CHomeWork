#include<iostream> 
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std; 

int main()
{ 
	srand(time(0));
    int M[100][100],n=rand()%10+5,x,y;
    
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
          M[i][j]=rand()%90+10;
       }	
	}

    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
         cout<<setw(4)<<M[i][j];
       }	
	 cout<<endl;
    } 
	cout<<endl;
   	do{
   		cout<<"Enter a value for x:";
   		cin>>x;
   		cout<<"Enter a value for y:";
   		cin>>y;
   }while(x>y);
   
    int s=0;
    for(int i=0; i<n; i++)
    {  s=0;
       for(int j=0; j<n; j++)
       {
       	cout<<setw(4)<<M[i][j];
        s+=M[i][j];
        
       }
	   cout<<" s="<<s<<endl;
	   if (s>x&&s<y){
        	for(int j=0;j<n;j++)
			{
        		M[i][j]=0;
			}
			}	
    } 
   
	cout<<endl; 
	    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
         cout<<setw(4)<<M[i][j];
       }	
	 cout<<endl;
    } 
cout<<endl;
    
return 0;
}
