#include<iostream>
#include<cstdlib>//numero aleatorio
#include<ctime>//semilla
using namespace std;
int main()

{
/*
temp  es usado para el algortimo de ordenar 
*/
int i,j,n,temp=0;
 srand(time(0));
 cout<<"DIGITE n\n";
 cin>>n;

int vector[n] ;
 for(i=0;i<n;i++)
 {
    vector[i]=rand()%100;
 }
//ordenar 
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(vector[j]>vector[j+1])
        {
            temp=vector[j];
            vector[j]=vector[j+1];
            vector[j+1]=temp;
        }
    }
}
cout<<"Su vector ordenado es:\n";
for(i=0;i<n;i++)
{
    cout<<vector[i]<<" ";
}

//Busqueda binaria 

int inf=0,sup=n,mitad;
int dato=0,bandera=0;


cout<<"Ingrese el numero a buscar:\n";
cin>>dato;
temp=0;
	while((inf<=sup)&&(temp<n)){
		mitad = (inf+sup)/2;
		if(vector[mitad] == dato){
			bandera=1;
			break;
            }
		else{
            if(vector[mitad]>dato){
                sup = mitad;
                mitad = (inf+sup)/2;
                }
            else{
                if(vector[mitad]<dato){
                    inf = mitad;
                    mitad = (inf+sup)/2;
                    }
                }
	        }
            temp=temp+1;
        }

	if(bandera==1){
		cout<<"El numero ingresado si esta , su poscion es: \n"<<mitad<<endl;
	}
	else{
		cout<<"El numero ingresado NO se econtro";
	}
	

}

