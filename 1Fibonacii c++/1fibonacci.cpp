/*
Daniel Parra Parra-2191072
Sucesion de fibonacci
*/
#include <iostream> 
using namespace std; 
int main ()
{
// declaramos auxialiar 1 auxiliar 2 y la sucesion

int i,n,a1,a2,suc;
a1=0;
a2=1;
suc=1;

 cout<<"Digite hasta que termino desea ver la sucesion:\n ";
 cin>>n;
 for (i=1;i<n; i++)
 {
  suc = a1 + a2;
  a1 = a2;
  a2 = suc;
 }
 cout<<"Su sucesion hasta "<<n<<" tiene el valor de:"<<suc;


}