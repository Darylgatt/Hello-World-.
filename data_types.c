#include <stdio.h>

int main() {
    
    char lettre = 'O';
    int Age = 22;
    float taille = 1.71;
    short code = 250;
    long population = 2000000;
    double pi = 3.141590;

    // Affichage de "Hello World"
    printf("Hello, World!.\n");

    //Variable caractères (char) pour stocker un seul caractère
    printf("lette : %c\n", lettre);

    //Variable entière (int) pour les nombres entiers
    printf("Age : %d\n", Age);

    //Variable short - pour les petits nombres entiers
    printf("code : %hd\n", code);

     //Variable long - pour les grands nombres entiers
    printf("population : %ld\n", population);

    //Variable double - pour les nombres à virgule multiple
    printf("pi : %.6f\n", pi);
    return 0;
}