#include<stdio.h>
        int main(){
                int qteProd;
                float prix , chiffreA;
                       printf("Entrer la quantite de produit :\n");
                       scanf("%d",&qteProd);
                       printf("Entrer le prix du produit:\n");
                       scanf("%f",&prix);
                       chiffreA = qteProd * prix;
                       printf("Le chiffre d'affaire est : %.2f\n", chiffreA);
                return 0;
        }