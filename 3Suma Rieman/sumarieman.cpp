//DANIEL PARRA^{2} -2191072 
// ALGORITMOS Y ARQ COMPUTAC DE ALTO RENDIMIENTO D1
#include<iostream>
#include<math.h>// funcion exponencial 
using namespace std;
//Definimos la función exponencial  e^{-x^2}
//spoiler:integral Gaussiana -relacion con pi 

double expo(double x)
{
    return ( exp(-x*x) );

}

int main()
{
int i=0,n=0,d;
double a,b,valor=0,valorfi=0;
cout<<"Bienvenido digite 0 si quiere ver la solucion a la integral gausiana \n"; 
cout<<"e^{-x^2} evaluada en -00 a 00 , o sino digite cualquier otro numero:\n";
cin>>d;
//Le damos la eleccion de dos opciones:
//-Integral Gaussiana de -00 a 00 
//-Integral Gaussiana de a,b,n arbritarios 
if(d==0)
{
a=-1000;
b=1000;
n=10000;
for(i=0;i<n;i++)
{   
    valor=( (b-a)/(n) )*expo( a +i*( (b-a)/(n)) );
    valorfi=valor +valorfi;
}
double pi=3.141592;
cout<<"El valor de su integral es:\n"<<valorfi;
cout<<"\n lo cual es aproximadamente igual a sqrt(pi) ";
cout<<"cuyo valor es\n"<<sqrt(pi);
}
else { 

cout<<"Digite n,a,b respectivamente: \n";
cin>>n>>a>>b;
//Suma de R. Punto fronterizo derecho 
for(i=0;i<n;i++)
{   
    valor=( (b-a)/(n) )*expo( a +i*( (b-a)/(n)) );
    valorfi=valor +valorfi;
}

cout<<"El valor de su integral es:\n"<<valorfi;

}
}




