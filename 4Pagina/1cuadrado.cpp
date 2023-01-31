/*                  Daniel Parra^2-2191072
Conseguir un cuadrado perfecto

Un número es un cuadrado perfecto si su raíz cuadrada es un número exacto (sin decimales)
por lo que  el usuario ingresara un numero y el programa le dirá el número más pequeño que 
al ser multiplicado por el número del caso de prueba da como resultado un cuadrado perfecto.

La solucion consiste en ver si su raiz con decimales es igual a la raiz entera 
en dado caso de que no lo multiplicaremos por el numero siguiente hasta conseguir un cuadrado 
perfecto.
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cout<<"Bienvenido digite un numero:\n";
cin>>n;

float raiz=sqrt(n);


if(raiz==int(raiz))
{
    cout<<"Si es cp";
}
else {

int i=1;
int nn=n;
while(raiz!=int(raiz))
{
nn=n*i;
raiz=sqrt(nn);

i=i+1;
}
cout<<"No es un cuadrado pero se puede obtener al multiplicar"<<n<<"*"<<i-1<<"="<<nn;

}



    

}






