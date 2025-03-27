#include <stdio.h>



float notas(float n1, float n2){

    float media=0;

    media = (n1*4 + n2*6)/10.0;


    return media;


}




int main(){
    float n1,n2, media=0;

    printf("Me diga suas notas: ");
    scanf("%f %f", &n1, &n2);

    media = notas(n1,n2);

    printf("Sua media foi: %.2f \n", media);

    if(media<=4.9){

        printf("Seu conceito final foi D.\n");
    }
    else if(media>=5 && media <=6.9){
        printf("Seu conceito final foi C.\n");
    }
    else if(media>=7 && media <=8.9){
        printf("Seu conceito final foi B.\n");
    }
    else if(media>=9 && media <=10){
        printf("Seu conceito final foi A.\n");
    }



    return 0;
}