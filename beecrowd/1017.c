#include <stdio.h>
 
int main() {
    
    //car: 12/L 12KM ---- 1L
    //           XKM ----- yL
    //    12*y = XKM
    int time, speed, distance;
    float liters;
    scanf("%d %d", &time, &speed);

    distance = time*speed;

    liters = distance/12.0;

    printf("%.3f\n", liters);
  
    return 0;
}