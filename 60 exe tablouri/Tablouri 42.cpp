#include <iostream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(0));
	int V1[100],n=rand()%10+10, tmp,k,limit,max=-1,p=-1;
	cout<<"n = "<<n<<endl;

	for (int i=0;i<n;i++){
		V1[i]=rand()%100;	
	}
	
	for (int i=0;i<n;i++)cout<<setw(3)<<V1[i];
	cout<<endl;
	cout<<"Enter value for k:";
	cin>>k;
	cout<<"V1[k] = "<<V1[k]<<endl;
	int j=0;
	if((k-j)>(n-k-1)){
		limit=n-k-1;
	}else limit = k-j;
	cout<<"limit="<<limit<<endl;

	while (limit>0)
	{j++;
		//if(k>j||k+j<n-1){
			
			tmp=V1[k-j];
			V1[k-j]=tmp+V1[k+j];
			V1[k+j]=0;
			//cout<<"V1k-j = "<<V1[k-j]<<" V1k+j="<<V1[k+j]<<" tmp ="<<tmp<<" k ="<<k<<" j ="<<j<<endl;
			
		//}	
			limit--;		
			
		}	

	for (int i=0;i<n;i++)cout<<setw(4)<<V1[i];
	for (int i=0;i<n;i++){
		if (max<V1[i]){
			max=V1[i];
		}
		
	}cout<<"\nNumarul este: " <<max<<endl;
	for (int i=0;i<n;i++){
		if (max==V1[i]){
			p=i;
			cout<<"\nPozitia numarului maxim este: " <<p<<endl;
		}
		
	}
	
		
	//(c!=0? cout<<"In V1 sunt "<<c<<" numere mai mici decat in V2"<<endl:cout<<"Nu sunt numere mai mici in V1 fata de V2"<<endl);
		 
	return 0;
} 
