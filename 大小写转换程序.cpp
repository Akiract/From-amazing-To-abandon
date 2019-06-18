#include <iostream>
#include <iomanip>
using namespace std;


int main (){
	
	char c;
	c=getchar();
	
	if(int(c)>64&&int(c)<91){
	 putchar(c+32);
		putchar('\n');}
    else if(int(c)>96&&int(c)<124) {
	putchar(c-32);}
   else  cout<<"FAIL";
    	
	int i = c;
	cout<<i;
	return 0;
}
