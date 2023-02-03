/*
Daniel Parra Parra-2191072

*/


#include <iostream>
using namespace std;

int main()
{
    int A[20][20], B[20][20], C[20][20];
    int i,j,k,m,n,fb;

    cout<<"Lectura de matriz A."<<endl;
    cout<<"ingrese el numero de filas de A: ";
	 cin>>k;
    cout<<"ingrese el numero de Columnas de A: "; 
	cin>>m;
    cout<<"\n";
    for(i=0;i<k;i=i+1)
        for(j=0;j<m;j=j+1)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
do{

    cout<<"Lectura de matriz B."<<endl;
    cout<<"recuerde que el Ca=Fb";
    
    //arreglo de validación//
    
    cout<<"ingrese el numero de filas de B: ";
    cin>>fb;
}while(fb!=m);
	
    cout<<"ingrese el numero de columnas de B:\n "; 
	cin>>n;
    cout<<"\n";
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }

    // Inicializamos la matriz C.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C[i][j] = 0;

    // Generamos la matriz C.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C[i][j] += A[i][z] * B[z][j];

    cout<<"Matriz A: \n ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Matriz B: \n";
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Matriz C:\n ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    
}
