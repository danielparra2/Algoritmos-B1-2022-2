
/*         
Daniel Parra^2-2191072
Me parecio interesante por lo que decidi hacerlo

La solución consiste en que luego de ingresar el numero recorramos 
los numeros de uno en uno hasta ese numero, y si ese numero es divisible 
solamente por el 1 y por el mismo guardarlo en el vector Primo, el cual
será el que mostratemos 
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long x,ac,i,j,n,m,k=0;

cout<<"\t\t\t\t BIENVENIDO";
cout<<" \n----------Este programa mostrara los numeros primos que hay hasta el numero ingresado-------------\n";
cout<<"\n \t\t\t POR FAVOR DIGITE EL NUMERO: \n";




cin>>n;

long long V[n],P[n];

for(i=0;i<=n;i=i+1)
V[i]=i+1;


for(j=0;j<n;j=j+1)
{ac=0;
for(i=1;i<=V[j];i=i+1)
{if(V[j]%i==0)
ac=ac+1;
	}		
if(ac==2)
{P[k]=V[j];
k=k+1;  }
}

//impirmir//
cout<<"los numeros primos son:\n";
for(i=0;i<k;i++)
cout<<P[i]<<" \t";

cout<<"pulse para salir";
system("pause");
}

