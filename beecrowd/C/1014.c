#include <stdio.h>

int main(){

    //X = distance Y = liters
    int X;
    float Y, xy;
    scanf("%d %f", &X, &Y);

    xy = X/Y;

    printf("%.3f km/l\n", xy);
    return 0;
}