#include <stdio.h>

int main(){
    int N, h=0, min=0, sec=0; //seconds
    // 1 hour = 60 min
    //1 min = 60seg
    scanf("%d", &N);
    h = N/3600;
    min = (N%3600)/60;
    sec = N%60;
    printf("%d:%d:%d\n", h, min, sec);
    return 0;
}