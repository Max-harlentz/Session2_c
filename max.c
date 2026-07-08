#include<stdio.h>
int main() {
    float a,b;
          printf("\t Programme affichant le maximum. \n");
          printf("Entrer les valeur de a et b : \n");
          scanf("%f%f",&a,&b, "\n");
          if(a>b)
            printf("Le maximum est:%0.2f\n",a );
            else
                printf("Le maximum est:%0.2f\n",b);
          
    return(0) ;
}
