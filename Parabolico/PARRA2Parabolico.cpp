#include <iostream> //para imprimir y pedir  
#include <math.h> // cos y sin  
using namespace std;
int main()
{

/*condiciones inciales
y0=posicion vertical incial 
x0=posicion horizontal incial 
vi=Velocidad incial 
teta=angulo inciial */ 

float y0,x0,vi,teta;

/*vyi=componente vertical de la velocidad
vxi=Componente horizontal de la velocidad
g=Gravedad
tdc=tiempo de caida
incremento= Para aumenta en el bucle for*/

float vyi,vxi,g=9.8,tdc,incremento;
int n,i;


cout<<"Digite y0 \n ";
cin>>y0;
cout<<"Digite x0 \n";
cin>>x0;
cout<<"Digite vi \n";
cin>> vi;
cout<<"Digite teta en lenguaje humano (grados) \n ";
cin>>teta ;
cout<<"Digite n (de un valor entero) \n";
cin>>n ;

vyi=vi*sin( (teta*3.1416) / (180) );
vxi=vi*cos( (teta*3.1416) / (180) );
tdc=2*(vyi+y0)/g;

incremento=tdc/n;

/*
t[n]=Vector tiempo 
sum=variable de reducción
Vx[n]=Velocidad x
Vy[n]=Velocidad y
*/
 
float t[n],sum=0;
float Vx[n],Vy[n];


cout<<"--------------------------------------------------------------\n"
<<"SUS CONDICIONES INICIALES SON:\n"
<<"/x0: "<<x0<<" / y0: "<<y0 <<" / vi:"<<vi<<" / vyi: "<<vyi<<" / vxi: "<<vxi
<<" / teta:"<<teta<<" / n :"<<n;
cout<<" \n / tdc:"<<tdc<<" / incremento:"<<incremento;
// creamos el vector tiempo recorriendolo con el incremento 
for(i=0;i<n;i++)
{
    t[i]=t[i]+sum;
    sum=sum+ incremento;
}
// para solucionar el t0=nan
t[0]=0;
cout<<"\n vector tiempo es: \n ";
for(i=0;i<n;i++)
{
    cout<<t[i]<<" ";
}

// Evaluamos los vectores velocidades
for(i=0;i<n;i++)
{
    Vx[i]=vxi+0*t[i];
    Vy[i]=vyi-g*t[i];
}

cout<<"\n------------------------"<<"\n Vx: \n ";
for(i=0;i<n;i++)
{
   cout<<Vx[i]<<" "; 
}
cout<<"\n------------------------"<<"\n Vy: \n ";
for(i=0;i<n;i++)
{
   cout<<Vy[i]<<" "; 
}

}