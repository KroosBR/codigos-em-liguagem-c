#include <stdio.h>
#include <stdlib.h>

 

   typedef struct dados
    {
       char nome[50];
        long int matricula;
        int idade ;
    } tipo;
    
   
    void manipula_Arquivo(FILE *arquivo,tipo *estrutura){
    arquivo = fopen("banco.txt","a");
        if(arquivo==NULL){
              exit(0);
        }
	printf("Escreva seu nome: ");
        fflush(stdin);
        fgets(estrutura->nome,50,stdin);
	printf("Digite seu numero de matricula : ");
        scanf("%ld ",&estrutura->matricula);
	printf("Digite sua idade : ");
        scanf("%d",&estrutura->idade);

        fputs(estrutura->nome,arquivo);
        fprintf(arquivo,"%ld\n",estrutura->matricula);
        fprintf(arquivo,"%d\n",estrutura->idade);
        
        fclose(arquivo);
}
    
int main(){
    
    FILE *arq;
    tipo banco;
     manipula_Arquivo(arq,&banco);
}

