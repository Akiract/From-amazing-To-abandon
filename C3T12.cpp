/*********************
3.9
*********************/
#include<iostream>
#include<iomanip>
using namespace std;
int c1,c2,c3,c4,c5,n;
int main(){
	int n;
	int num(int a);
	void cal(int a);
	void sort(int c1,int c2,int c3,int c4,int c5);
	int a;
	cin>>a;
 	num(a);
 	cal(a);

 	sort(c1,c2,c3,c4,c5);
	
 	
	
	
}
int num(int a)
{	

		if(a>=10000)n=5;
	else if(a>=1000)n=4;
	else if(a>=100)n=3;
	else if(a>=10)n=2;
	else if(a>=0)n=1;
	cout<<n<<endl;


}
void cal(int a)
{
	c1=a/10000;
	c2=(a-c1*10000)/1000;
	c3=(a-c1*10000-c2*1000)/100;
	c4=(a-c1*10000-c2*1000-c3*100)/10;
	c5=a-c1*10000-c2*1000-c3*100-c4*10;

}

void sort(int c1,int c2,int c3,int c4,int c5)
{
cout<<c5<<c4<<c3<<c2<<c1<<endl;
}
