#include<stdio.h>
int main() { 
             float L,l,p,s;
                   printf("Entrer la lngueur et la largeur du rectangle :");
                   scanf("%f%f",&L,&l);
                    p=2*(L+l);
                    s=L*l;
                    printf("Le perimetre du rectangle est : %0.2f\n", p);
                    printf("La surface du rectangle est : %0.2f\n", s);
            return 0;

}