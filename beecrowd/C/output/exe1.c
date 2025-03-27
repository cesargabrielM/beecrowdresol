#include <stdio.h>
#include <string.h>

int main(){

    char normal[50], cebolinha[50], temp;

    printf("Me diga a mensagem a ser criptografada: ");
    scanf("%[^\n]s", normal);

    for(int i = 0; normal[i]!='\0';i++){

        if (normal[i]=='r'){
            cebolinha [i] = 'l';
        }
        else {
            cebolinha[i] = normal[i];
            cebolinha[i + 1] = '\0';
        } 


    }

    int tamanho = strlen(cebolinha);

    if(tamanho>1){
        temp = cebolinha[0];
        cebolinha[0] = cebolinha[tamanho-1];
        cebolinha[tamanho-1] = temp;
    }

    printf("O texto: %s \n", normal);
    printf("A criptografia: %s", cebolinha);





    return 0;
}