//DANIEL PARRA^2 2191072

//Librerias a usar:
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
//n cantidad de coordenadas
// i iterador del bucle for 
//Vecx y Vecy vectores que almacenan la componete x y y de cada coordenada 
int n,i;
int Vecx[n],Vecy[n];

//--------------------Ingreso de las coordenadas----------------------
cout<<"───────────────────────────────────────\n";
cout<<"───▐▀▄───────▄▀▌───▄▄▄▄▄▄▄─────────────\n";
cout<<"───▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄──────────\n";
cout<<"──▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄────────\n";
cout<<"──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄──────\n";
cout<<"▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────\n";
cout<<"▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐───▄▄\n";
cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█\n";
cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀─\n";
cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀───\n";
cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌────\n";
cout<<"─▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐─────\n";
cout<<"─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────\n";
cout<<"──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐──────\n";
cout<<"──▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌──────\n";
cout<<"────▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀────────\n";
cout<<"Digite n ";
cin>>n;
    for (i=0;i<n;i++)
    {   cout<<"Ingrese x"<<i<<"\n ";
        cin>>Vecx[i];
    }
   
    for(i=0;i<n;i++)
    {   cout<<"Ingrese y"<<i<<" \n";
        cin>>Vecy[i];
    }

    //imprimimos
    cout<<"\n Su vector X es: \n";
    for(i=0;i<n;i++)
    {
        cout<<Vecx[i]<<" ";
    }
    cout<<"Su vector Y es: \n";
    for(i=0;i<n;i++)
    {
        cout<<Vecy[i]<<" ";
    }

//----------------------Calculo de la pendiente----------------------
float sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,a;
for(i=0;i<n;i++)
{   
    sum1=sum1 + (Vecx[i]*Vecy[i]);
    sum2=sum2+Vecx[i];
    sum3=sum3+Vecy[i];
    sum4=sum4+pow(Vecx[i], 2);
    sum5=sum5+Vecx[i];
}
sum1=n*sum1;
sum4=n*sum4;
sum5=pow(sum5,2);
a=(sum1-sum2*sum3)/(sum4-sum5);
cout<<"\n Su  a es: \n "<<a;
//----------------------Calculo de b----------------------
float sum6=0,sum7=0,b;
for(i=0;i<n;i++)
{
    sum6=sum6+Vecy[i];
    sum7=sum7+Vecx[i];
}
sum7=a*sum7;
b=(sum6-sum7)/(n);
cout<<"\n "<<"su b es :\n"<<b;

//----------------------Resultado final----------------------
cout<<"su recta aproximada es:\n";
cout<<"y="<<a<<"*x"<<"+"<<b;
}