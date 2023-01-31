/*  Daniel Parra^2-2191072
Gregorio XIII

Un año es  considerado bisiesto si es divisible entre 4, excepto el último de cada siglo
(aquel divisible por 100), salvo que este último sea divisible por 400.

La solucion consiste en que luego de que el usuario nos proporcione un año 
primeramente miramos si es divisble por 100 , SI lo es probaremos si es divisble por 400
                                            SINO lo es probaremos que sea divisible por 4
 para asi determinar si es o no es un año bisiesto.

*/

#include<iostream>
using namespace std;

int main(){

int p=0,a;

cout<<"Bienvenido digite los casos de prueba que desee analizar:\n ";
cin>>p;

while(p>0)
{
     p=p-1;
    cout<<"Digite el año a analizar:\n";
    cin>>a;

if (a%100==0)
    {
    if (a%400==0){
        cout<<"Febrero para ese año tendra 29 días\n";
    }
    else {
        cout<<"Febrero para ese año tendra 28 días\n";
    } 
    }
else {
    if(a%4==0){
        cout<<"Febrero para ese año tendra 29 días\n";
    }
    else{
        cout<<"Febrero para ese año tendra 28 días\n";
    }
    }

   

}

}