//DANIEL PARRA PARRA -2191072 
// ALGORITMOS Y ARQ COMPUTAC DE ALTO RENDIMIENTO D1

#include <iostream>
using namespace std;
int main()
{
//Declaramos las variables
int n,a,b,i;
float prom,promedio;
cout<<"\n\n\n";
cout<<"\t\t\t\t#############\n";
cout<<"\t\t\t\t##         ##\n";
cout<<"\t\t\t\t#  ~~   ~~  #\n";
cout<<"\t\t\t\t#  ()   ()  #\n";
cout<<"\t\t\t\t(     ^     )\n";
cout<<"\t\t\t\t |         | \n";
cout<<"\t\t\t\t |  {===}  | \n";
cout<<"\t\t\t\t  |       |  \n";
cout<<"\t\t\t\t    ----- \n";
cout<<"\t\t\t\t BIENVENIDO\n";
cout<<"Digite la cantidad de numeros de los cuales desee calcular su promedio ";
cout<<"\n\n\n";

//Pedimos la cantidad de numeros
cin>>n;

for (i=0;i<n;i++)
{   a=0;
   cout<<"Digite el numero: \n";
   cin>>a;
   prom=prom + a;
}
promedio=prom/n;
cout<<"Su promedio es: " << promedio ;
//pedimos de nuevo el numero para que si ejecutamos el .exe, podamos ver el resultado 
cin>>n;
}

//DANIEL PARRA PARRA -2191072 
// ALGORITMOS Y ARQ COMPUTAC DE ALTO RENDIMIENTO D1