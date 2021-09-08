#include <stdio.h>
#include <stdlib.h>

extern int EjercicioPrueba(int N,int*numeros);



int main (int argc,char **argv){
    int N;
    int suma_total;
    int *numeros;
    
    N=argc-1;

    numeros = (int*)malloc(N*sizeof(int));

    for(int i=0;i<N;i++){
        numeros[i]=(int)atoi(argv[i+1]);
    }


    suma_total=EjercicioPrueba(N,numeros);

    printf("La suma de :");
    for(int i=0;i<N;i++){
        printf("%d ",numeros[i]);
    }
    printf("\n es : %d\n",suma_total);
    
    

    free(numeros);
    return 0;
}