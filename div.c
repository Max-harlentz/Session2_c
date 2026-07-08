#include<stdio.h>
int main(){

    float a,b,d;
    printf("\t Programme affichant le resultat de la division. \n");
    printf("Veuillez entrer les valeurs de a et de b : \n");
    scanf("%f%f",&a,&b, "\n");
    if(b==0)
        printf("La division par 0 est impossible.\n");
    else{
        d=a/b;
        printf("Le resultat de la division est:%.2f\n",d);
    }
   return(0) ;
}