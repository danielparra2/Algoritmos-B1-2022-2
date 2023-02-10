#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

int main()
{
//Definimos las variables a usar 
float a, rad, coseno, seno, A1[2][2], A2[2][2], A3[2][2], A4[2][2], B[2][2], C1[2][2], C2[2][2], C3[2][2], C4[2][2];
double k=1, n=2, m=2;

//Le Pedimos al usaurio que ingrese las componentes de los vectores a rotar para un angulo theta
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
    
    cout<<"Ingrese las coponentes de: "<<endl;
    for(int z=0; z<m; ++z)
        for(int i=0; i<k; ++i)
        {
            cout<<"Vector 1["<<z<<"]["<<i<<"]: ";
            cin>>A1[z][i];
        }
    for(int z=0; z<m; ++z)
        for(int i=0; i<k; ++i)
        {
            cout<<"Vector 2["<<z<<"]["<<i<<"]: ";
            cin>>A2[z][i];
        }
    for(int z=0; z<m; ++z)
        for(int i=0; i<k; ++i)
        {
            cout<<"Vector 3["<<z<<"]["<<i<<"]: ";
            cin>>A3[z][i];
        }
    for(int z=0; z<m; ++z)
        for(int i=0; i<k; ++i)
        {
            cout<<"Vector 4["<<z<<"]["<<i<<"]: ";
            cin>>A4[z][i];
        }
    cout<<"Indique el valor del ángulo theta:";
    cin>>a;

//Formulamos de la matriz de rotacion (transformacion)
rad=a*PI/180;
 seno=sin(rad); 
 coseno=cos(rad);

    for(int j=0; j<n; ++j)
        for(int z=0; z<m; ++z)
            B[j][z]=0;

            B[0][0]=coseno;
            B[0][1]=seno;
            B[1][0]=-seno;
            B[1][1]=coseno;

    //Inicializacion y formulacion de los vectores transformados
    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            C1[j][i] = 0;

    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            for(int z=0; z<m; ++z)
                C1[j][i] += B[j][z]*A1[z][i] ;
    
    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            C2[j][i] = 0;

    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            for(int z=0; z<m; ++z)
                C2[j][i] += B[j][z]*A2[z][i] ;

    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            C3[j][i] = 0;

    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            for(int z=0; z<m; ++z)
                C3[j][i] += B[j][z]*A3[z][i] ;


    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            C4[j][i] = 0;

    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
            for(int z=0; z<m; ++z)
                C4[j][i] += B[j][z]*A4[z][i] ;

   
//Imprimimos los vectores ingresados
cout<<"\n-Sus vectores ingerasados son:\n ";

cout<<"Vector 1: ";
    for(int z=0; z<m; ++z)
    {
        for(int i=0; i<k; ++i)
        {
            cout<<A1[z][i]<<" ";
        }
       
    }
cout<<"\n";
cout<<"Vector 2: ";
    for(int z=0; z<m; ++z)
    {
        for(int i=0; i<k; ++i)
        {
            cout<<A2[z][i]<<" ";
        }     
    }
cout<<endl;
cout<<"Vector 3: ";
    for(int z=0; z<m; ++z)
    {
        for(int i=0; i<k; ++i)
        {
            cout<<A3[z][i]<<" ";
        }     
    }
cout<<endl;
cout<<"Vector 4: ";
    for(int z=0; z<m; ++z)
    {
        for(int i=0; i<k; ++i)
        {
            cout<<A4[z][i]<<" ";
        }
        
    }
cout<<endl;

//Imprimimos los vectores resultantes
cout<<"-Sus vectores rotados son:\n ";
cout<<"Vertor 1: ";
    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
        {
            cout<<C1[j][i]<<" ";
            
        }
        cout<<"\n";

cout<<"Vector 2: ";
    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
        {
            cout<<C2[j][i]<<" ";
            
        }
        cout<<endl;

cout<<"Vector 3: ";
    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
        {
            cout<<C3[j][i]<<" ";
            
        }
        cout<<endl;

cout<<"Vector 4: ";
    for(int j=0; j<n; ++j)
        for(int i=0; i<k; ++i)
        {
            cout<<C4[j][i]<<" ";
            
        }
        cout<<endl;
    }