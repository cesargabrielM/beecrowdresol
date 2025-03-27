#include <stdio.h>
#include "pilha.h"

int empilharPilha(tp_pilha *p, tp_pilha *p2){

    tp_pilha p4;
    startStack(&p4);
    tp_item e;

    while(!emptyStack(p)){
        pop (p, &e);
        push (&p4,e);
    }
    while(!emptyStack(&p4)){
        pop (&p4, &e);
        push (p2,e);
    }
}

int main(){
    tp_pilha p1, p2, p3;
    startStack(&p1);
    startStack(&p2);
    startStack(&p3);

    push(&p1, 10);
    push(&p1, 11);
    push(&p2, 20);
    push(&p2, 21);

    empilharPilha(&p1, &p2);

    printStack(p3);

    return 0;
}