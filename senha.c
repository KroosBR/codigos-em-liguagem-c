#include <stdio.h>

int main(){
    int verifica = 1;
    int senha;
    while (verifica!=0)
    {
        scanf("%d",&senha);
        if(senha==2002){
            printf("Acesso Permitido\n");
            verifica = 0;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    
    return 0;
}