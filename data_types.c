#include <stdio.h>

int main() {
    
    int nombre, i;
    
    // la boucle for affiche les nombres de 1 à 10
    for(int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    printf("\n");
    
    printf("Entrer un nombre entre 1 et 20\n");
    scanf("%d", &nombre);
    for(int i = 1; i <= 20; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }
    printf("\n");
    //la boucle for affiche l'alphabet miniscule complet 
    printf("L'alphabet miniscule\n");
    for(int i = 'a'; i <= 'z'; i++) {
        printf("%c\n", i);
    }
    printf("\n");
    //la boucle for affiche l'alphabet majuscule complet 
    printf("L'alphabet majuscule\n");
    for(int i = 'A'; i <= 'Z'; i++) {
        printf("%c\n", i);
    }
    printf("\n");
    printf("L'alphabet majuscule\n");
    for(int i = 65; i <= 90; i++) {
        printf("%c", i);

        printf("\n");
    }
    printf("\n");
    int resultat = 1;

    //Demander à l'utilisateur de saisir un nombre
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    printf("Puissances de %d de 1 à 10 :\n", nombre);

    for (int i = 1; i <= 10; i++) {
        resultat *= nombre; // on multiplie à chaque tour
        printf("%d ^ %d = %d\n", nombre, i, resultat);
    }
    
    
       
    

    return 0;
}