/*                  Daniel Parra^2-2191072
Menor número con la misma suma de dígitos

Depues de ingresar un numero el programa mostrara el menor número positivo cuya suma de dígitos,
sea igual al valor de la entrada

La idea es que despues de ingresar un n, recorramos los a desde 1 hasta un numero tal que
 la suma de sus digitos de n, por esta razón puse el while  y fui 
aumentando a hasta conseguirlo.

*/

#include<iostream>
using namespace std;
int main(){


cout<<"Ingrese un numero ";
int i,n,sum, a=1,a2,sum2;
cin>>n;

while(sum!=n)
{
    a2=a;
    sum2=0;
    cout<<"su cuenta va en "<<a<<"\n";
    while(a2>0)
    {
        sum2=sum2+a2%10;
        a2=a2/10;
    }
    sum=sum2;
    a=a+1;
}

cout<<" El menor numero con cuya suma digitos da el numero ingresado es:\n"<<a-1;

    
}
    
