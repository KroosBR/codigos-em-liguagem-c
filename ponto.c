#include <stdio.h>
#include <math.h>

int main(){
      int  entrada;
         long int lado = 2 ; 
     scanf("%d",&entrada);
     while(entrada>0){
         lado = (lado + lado) - 1;
         entrada--;
     }
     printf("%ld\n",lado*lado);
    return 0;
}

