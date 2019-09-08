#include <stdio.h>
#include <math.h>

int main(){
    int entrada=0 ;
    double utilizou=0;
    while (scanf("%d",&entrada)!=EOF){
        if(entrada==1){
                printf("0\n");
        }
        else 
        {
            utilizou = log10(entrada)/log10(2);
            printf("%lf\n",utilizou);
        }
        
    }
    return 0;
    
}
