
#Importamos las librerias a usar 
import numpy as np
import matplotlib.pyplot as plt
#Las de la nota xD
import multiprocessing
import time



#Funcion integral del campo electrico
#Nota:en el jupyter está más  explicado
def EZ(z0):
    suma=0
    lim_inf=0
    lim_sup=2*np.pi
    cant_num=10000
    k=4
    r=1
    x0=0
    y0=0
    #vector conformado de numeros aleatorios
    t=np.random.uniform(lim_inf,lim_sup,cant_num)
    #Evaluamos la integral
    for i in range(cant_num):
        suma=suma +    (k*r*z0   )/(    ( (x0-r*np.cos(t[i]))**2 +(y0-r*np.sin(t[i]))**2 +(z0)**2 )**(3/2)        )
    resultado=((lim_sup-lim_inf)/(cant_num))*suma
    return resultado

#Paralelización 
if __name__ == '__main__':
    procs = 1
    #Iniciamos el contador del tiempo
    inicio = time.perf_counter()
    pool = multiprocessing.Pool(processes=procs)
    #ENTRADA
    u=np.linspace(-10,10,100)
    inputs = inputs = [*u]
    #Salida
    outputs = pool.map(EZ, inputs)
    #Finalizamos el contador del tiempo
    final= time.perf_counter()
    
    print(" Su tiempo fue",final-inicio)
    
    
    #---------------------Grafica------------
    plt.plot(u,EZ(u),"-g")
    plt.title("EZ vs z")
    #Poner eje x, y
    ax = plt.gca() 
    #Colores 
    ax.spines['right'].set_color('none')
    ax.spines['top'].set_color('none')
    #Lineas 
    ax.spines['bottom'].set_position(('data',0))
    ax.spines['left'].set_position(('data',0))
    plt.plot(u,outputs,"-")
    plt.show()
    
    
    
    
    
    
    
    