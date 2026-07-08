#include<stdio.h>
#include<math.h>
         int main(){
            float X,Y,Z;
                  printf("Entrer la valeur de X et Y : ");
                  scanf("%f%f", &X, &Y);
                  Z = pow(X, Y);
                  printf("La puissance de X a la puissance Y est : %0.2f\n", Z);
            return 0;
         }