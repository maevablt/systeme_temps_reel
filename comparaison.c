#include <stdio.h>
#include "Header_TP1.h"

int comparer(int a, int b) {
    if (a > b) {
        printf("Le plus grand est : %d\n", a);
    } else if (b > a) {
        printf("Le plus grand est : %d\n", b);
    } else {
        printf("Les deux valeurs sont égales à %d\n", b);
    }
    return 0;
}

int compterfor(int a) {
    for (int i = 0; i < a+1; i++) {
        printf("%d\n",i);
    }
    return 0;
}

int number_adress(int nombre) {
    printf("Valeur de la variable : %d\n", nombre);
    printf("Adresse memoire de la variable : %p\n", (void*)&nombre);

    return 0;
}

int rechercher_liste(int liste[], int taille, int cible) {
    for (int i = 0; i < taille; i++) {
        if (liste[i] == cible) {
            return i; // Retourne l'index si trouvé
        }
    }
    return -1; // Retourne -1 si la valeur n'existe pas
}



