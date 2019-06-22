//out "n!" every item
/*for(i=1;i<=n;i++)
{
an=1;
an=an*i
}
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int t,n,i,k;
double sn=0;
cin>>n;
t=n;
while(t!=0)
{
int an=1;
for(i=1;i<=t;i++)
{
an=an*i;
}
cout<<an<<endl;
sn=sn+(1.0/an);


t--;

}
cout<<setiosflags(ios::fixed)<<setprecision(3)<<sn<<endl;

return 0;
}
