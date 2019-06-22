/*最大公约数LCD=M*N/HCF ;        HCF：  M%N=R   N%R=S  R%S=======0; HCF=S*/

#include <iostream>
using namespace std;

int main(){
	int m,n,temp,p,r;
	
	cin>>m>>n;
		  p=m*n;
	if(m<n)
	{
		temp=m;m=n;n=temp;
	 } 

	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	cout<<"hcf="<<m<<endl;
	cout<<"lcd="<<p/m;
return 0;
}
