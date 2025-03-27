#include <stdio.h>
#include "pilha.h"

int retiraImpares(tp_pilha *p)
{
    tp_pilha p_Aux;
    startStack(&p_Aux);
    tp_item e;
    while (!emptyStack(p)){
        pop(p, &e);
        if (e%2==0){ //verifica se eh par
            push(&p_Aux, e);
        }     
    }
    while (!emptyStack(&p_Aux)){
        pop(&p_Aux, &e);
        push(p, e);
    }
}

int main()
{
    tp_pilha pilha1;
    startStack(&pilha1);
    push(&pilha1, 12);
    push(&pilha1, 33);
    push(&pilha1, 10);
    push(&pilha1, 17);

    retiraImpares(&pilha1);

    printStack(pilha1);

    printf("\nHello World");

    return 0;
}