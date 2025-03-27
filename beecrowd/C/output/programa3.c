#include <stdio.h>
#include <math.h>


float reajuste(float salario){
    float ns;
    if(salario<500){
        ns = salario*1.15;

        return ns;
    }

    else if (salario>=500 && salario <= 1000){
        ns = salario*1.10;

        return ns;
    }

    else if(salario>1000){
        ns = salario*1.05;

        return ns;

    }

}


int main(){
    float salario, r=0;

    printf("Seu salario eh de R$: ");
    scanf("%f", &salario);

    r = reajuste(salario);

    printf("O seu novo salario sera: R$ %.2f\n", r);

    return 0;
}