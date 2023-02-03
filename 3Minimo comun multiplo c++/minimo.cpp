/*
Daniel Parra Parra-2191072

El mínimo común múltiplo (abreviado m.c.m) de dos o más números naturales es 
el menor múltiplo común de todos ello

por ejemplo los multiplos de 2 y 3 son respectivamente:

N*1=    2       3
N*2=    4       6
N*3=    6       9
N*4=    8       12
N*5=    10      15
para este caso seria 6 ya que es el menor multiplo común.

*/

#include <iostream>
using namespace std;  

int main()  
{  
    //Declaramos los numeros a y b y el el mayor de ellos

    int a, b, mayor;  
    cout << "Bienvenido ingrese el primer numero:\n ";
    cin >> a;
    cout<<"Ingrese el segundo:\n";
    cin>>b;
    //Buscamos el mayor

    if(a > b){
        mayor = a;
    }else{
        mayor = b;
    }
      
    while (true)    
    {  /* 
        Revisamos si el numero mayor es divisible pr ambos numeros ingresados,
         en dado caso de que no, lo aumentaremos, hasta conseguir ese numero 
         el cual es el minimo comun multiplo(el cual es divisible por los dos 
          numeros)
          Nota=usamos el break para que apenas lo encuentre termine el bucle.
    */
        if(mayor%a==0 && mayor%b==0)  
        {  
            cout <<"El minimo comun multiplo para: " <<a<<" y " <<b<<" es: " << mayor;  
            break;  
        }  
        mayor=mayor+1; //si este numero no fue multiplo, se incrementa por uno
    }  
    
}  