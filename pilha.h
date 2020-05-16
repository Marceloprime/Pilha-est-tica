//Author: Marcelo Augusto dos Reis
//Projeto: Pilha estatica
//Obs: Para aumetar a capacidade da pilha alterer o define MAX
#include <stdio.h>
#include <stdlib.h>

//Capacidade da pilha
#define MAX 10

//estrutura da pilha
typedef struct{
    int topo;
    char infor[MAX];
}Pilha;


//funcoes

void push_stack(Pilha *stack, char infor);
void pop_stack(Pilha *stack);
void print_stack(Pilha *stack);
void xxx_stack(Pilha *stack);

//funcoes auxiliares
int full_stack(Pilha *stack);
int void_stack(Pilha *stack);