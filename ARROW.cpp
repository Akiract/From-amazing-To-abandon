// use `using` for 1.4.1

#include <iostream>

using namespace std;
int i,j,k;
int main()
{
	for(i=1;i<=7;i+=2)
	{
		j=0;
		while(j!=i)
		{	
			j++;
			cout<<"*";
		}
		if(j=i)cout<<endl;
	}
	if(i>=7)
  	{	
  		for(i=7;i>=0;i-=2)
	{
		j=0;
		
		while(j!=i)
		{	
			j++;
			
			cout<<"*";
			
	}
		if(j=i)cout<<i<<endl;
  	
	  }
    return 0;
}
}
