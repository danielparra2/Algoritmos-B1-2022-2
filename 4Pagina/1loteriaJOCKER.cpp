/*                  Daniel Parra^2-2191072
Menor número con la misma suma de dígitos
consiste en Meter 7 numeros  y meter otros 7 y  ver si gano la loteria.
La idea es que el usuario ingrese los numeros ordenarlos y ver si cada elemento es igual.
*/
#include<iostream>
using namespace std;
int main()
{
// Pedimos los numeros 
int vec[7],vec2[7];
cout<<"Digite los numeros: \n";

for(int i=0;i<7;i++)
{
    cout<<" ";
    cin>>vec[i];
}
cout<<"Digite los otros: \n";
for(int i=0;i<7;i++)
{
    cout<<" ";
    cin>>vec2[i];
}


//         Ordenamos ambos vectores
int i,n=7,j,temp;

for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(vec[j]>vec[j+1])
        {
            temp=vec[j];
            vec[j]=vec[j+1];
            vec[j+1]=temp;
        }
    }
}

temp=0;
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(vec2[j]>vec2[j+1])
        {
            temp=vec2[j];
            vec2[j]=vec2[j+1];
            vec2[j+1]=temp;
        }
    }
}


//recorremos ambos vectores de tal forma que si tiene 7 elementos 
// repetidos temp valdra 7

temp=0;
for(i=0;i<7;i++)
{
    if(vec[i]==vec2[i])
    {
        temp=temp+1;
    }
}


if(temp==7)
{
    cout<<"Mi loco salio de pobre";
}
else {
    cout<<"Mi loco siguio pobre";
}

}