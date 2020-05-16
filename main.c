//Author: Marcelo Augusto dos Reis
//Projeto: Pilha estatica
//Obs: Para aumetar a capacidade da pilha alterer o define MAX

#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main(){
    //Criacao da pilha
    Pilha *stack;
    stack = (Pilha*) malloc (sizeof(Pilha));
    if(stack == NULL){
        printf("Erro na criacao da Pilha\n");
    }
    stack->topo = -1;
    //////////////////

    int opcao;//caso o usuaria aperte enter ele saira do programa
    char infor;

    
    printf("\n\nDigite:\n 1 para inserir\n 2 para remover\n 3 para impressao da pilha\n 4 para sair\n");
    scanf("%d",&opcao);

    while(opcao != 4){
        if(opcao == 1){
            scanf("\n %c",&infor);
            push_stack(stack,infor);
        }
        else if(opcao == 2){
            pop_stack(stack);
        } 
        else if(opcao == 3){
            printf("Pilha:\n\n");
            print_stack(stack);

        }
        else{
            printf("Opcao invalida\n");
        }
        printf("/////////////////////////////////////////\n");
        printf("Opcao:");
        scanf("%d",&opcao);
    }

    printf("Obrigado, Marcelo");

    xxx_stack(stack);//destruicao da pilha

    return 0;
}