#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	
	float i,b1,b2,b3,b4,b5,bonus;
	int c;
	cin>>i;
	c=i/100000;
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b3=b2+200000*0.05;
	b4=b3+200000*0.03;
	b5=b4+400000*0.015;
	if(c>10)c=10;
	
	switch(c)
	{
		case 0: bonus=i*0.1;break;
		case 1:	bonus=b1+(i-100000)*0.075;break;
		case 2: 
		case 3:bonus=b2+(i-200000)*0.05;break;
		case 4:
		case 5:bonus=b3+(i-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
			case 9:bonus=b4+(i-600000)*0.015;break;
				case 10:bonus=b5+(i-1000000)*0.01;break;
	}
			cout<<"Bonus="<<bonus;

}
