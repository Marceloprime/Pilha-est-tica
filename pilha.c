//Author: Marcelo Augusto dos Reis
//Projeto: Pilha estatica
//Obs: Para aumetar a capacidade da pilha alterer o define MAX
#include "pilha.h"

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//Verificar se a piçha esta cheia
int full_stack(Pilha *stack){
    if(stack->topo == MAX){// MAX eh a capacidade maxima da pilha
        //Pilha cheia
        return 1;
    }
    else{
        //pilha nao cheia
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////
//Verificar se a piçha esta vazia
int void_stack(Pilha *stack){
    printf("%d",stack->topo);
    if(stack->topo == -1){// -1 eh o valor de inicializacao
        //Pilha vazia
        return 1;
    }
    else{
        //pilha nao vazia
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////
//Insercao da pilha
void push_stack(Pilha *stack, char infor){
    if(full_stack(stack) == 1){
        printf("\nA pilha esta vazia, por favor insirar\n");
        return;
    }
    else{
        stack->topo++;//topo eh atualizado
        stack->infor[stack->topo] = infor;//insercao
    }
    printf("Inseriu\n\n");

}

////////////////////////////////////////////////////////////////////////////////
//Remocao da pilha
void pop_stack(Pilha *stack){
    if(void_stack(stack) == 1){
        printf("\nA pilha esta vazia, por favor insirar\n");
        return;
    }

    printf("Removeu: %c\n\n",stack->infor[stack->topo]);
    stack->topo--;//topo eh atualizado
    

}
////////////////////////////////////////////////////////////////////////////////
//Impressao
void print_stack(Pilha *stack){
    if(void_stack(stack) == 1){
        printf("\nA pilha esta vazia, por favor insirar\n");
        return;
    }

    printf("Topo index: %d\n",stack->topo);
    printf("////////////\n");

    int i = stack->topo;
    for(;i > -1; i--){
        printf("%c\n",stack->infor[i]);
    }

    printf("////////////\n");

}
////////////////////////////////////////////////////////////////////////////////
//Destruicao da pilha

void xxx_stack(Pilha *stack){
    printf("oi9");
    if(stack == NULL){
       return;//caso a pilha nao tenha sido criada
    }
    else{
        free(stack);
    }
}