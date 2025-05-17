#include <stdio.h>

int main() {

    int nombre;
       
       //Demande à l’utilisateur d’entrer un nombre entier
        printf("Veuillez entrer un nombre :");
        scanf("%d", &nombre);

        //Afficher si le nombre est positif, négatif ou égal à 0
    if( nombre > 0) {
        printf("Le nombre est positif\n"); 
    } else if(nombre < 0) {
        printf("Le nombre est négatif\n"); 
    }else {
        printf("Le nombre est zero\n"); 
    }

    return 0;
}