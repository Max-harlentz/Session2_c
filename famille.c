#include<stdio.h>
int main(){

    int y;
    printf("\t Archive familiale. \n");
    printf("Entrer un nombre entre 1 et 8: \n");
    scanf("%d",&y);
         
    switch(y){
        case 1:
        printf("\t Informations du membre. \n");
            printf("Nom complet: Noa Banks,\n"
                    "Age: 20 ans\n"
                    "Date de naissance : 11-2006\n"
                    "sexe : Homme\n"
                    "poids : 65 kg\n"
                    "Taille : 1.75 m\n"
                    "Rang generationenelle: Aine\n");
            break;

        case 2:
        printf("\t Informations du membre.\n");
            printf("Nom complet: Luisy Banks,\n"
                    "Age: 18 ans\n"
                    "Date de naissance : 01-2008\n"
                    "sexe : Femme\n"
                    "poids : 55 kg\n"
                    "Taille : 1.750 m\n"
                    "Rang generationenelle: Cadette\n");
            break;

        case 3:
        printf("\t Informations du membre. \n");
            printf("Nom complet: Samuel Banks,\n"
                    "Age: 16 ans\n"
                    "Date de naissance : 03-2010\n"
                    "sexe : Homme\n"
                    "poids : 47 kg\n"
                    "Taille : 1.70m\n"
                    "Rang generationenelle: Troisieme enfant\n");
            break;
        
        case 4:
        printf("\t Informations du membre. \n");
            printf("Nom complet: Myriam Banks,\n"
                    "Age: 12 ans\n"
                    "Date de naissance : 05-2014\n"
                    "sexe : Femme\n"
                    "poids : 37 kg\n"
                    "Taille : 1.30 m\n"
                    "Rang generationenelle: Quatrieme enfant\n");
            break;
            
        case 5:
        printf("\t Informations du membre. \n");
            printf("Nom complet: Naruto Banks,\n"
                    "Age: 10 ans\n"
                    "Date de naissance : 03-2016\n"
                    "sexe : Homme\n"
                    "Poids : 28kg\n"
                    "Taille : 1.50 m\n"
                    "Rang generationenelle: Cinquieme enfant\n");
            break;

        case 6:
        printf("\t Informations du membre. \n");
            printf("Nom complet: Sakura Banks,\n"
                    "Age: 8 ans\n"
                    "Date de naissance : 07-2018\n"
                    "sexe : Femme\n"
                    "Poids : 25kg\n"
                    "Taille : 1.20 m\n"
                    "Rang generationenelle: Benjamen\n");
            break;
        
        case 7:
        printf("\t Informations du membre. \n");
            printf("Nom complet: Naala Banks,\n"
                    "Age: 43 ans\n"
                    "Date de naissance : 09-1983\n"
                    "sexe : Femme\n"
                    "Poids : 70kg\n"
                    "Taille : 1.70 m\n"
                    "Rang generationenelle: Mere\n");
            break;

        case 8:
        printf("\t Informations du membre. \n");
            printf("Nom complet: Pres Samuel Banks,\n"
                    "Age: 43 ans\n"
                    "Date de naissance : 07-1983\n"
                    "sexe : Homme\n"
                    "Poids : 80kg\n"
                    "Taille : 1.80 m\n"
                    "Rang generationenelle: Pere\n");
        default: 
            printf("Nombre innexistant, veuillez entrer un autre nombre.\n");
            break;
    }
    return (0);
}