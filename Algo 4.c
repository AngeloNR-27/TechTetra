#include <stdio.h>

int comptePairesOpposees(int T[], int taille) {
    int count = 0;
    int i;
    int j;
    for (i = 0; i < taille - 1; i++) {
        for (j = i + 1; j < taille; j++) {
            if ((T[i] == -T[j]) || (T[i] == 1.0 / T[j])) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int i;
    int T[taille];
    printf("Entrez les éléments du tableau : ");
    for (i = 0; i < taille; i++) {
        scanf("%d", &T[i]);
    }

    int nombrePaires = comptePairesOpposees(T, taille);
    printf("Le tableau contient %d paires d'indices où les éléments sont opposés ou inverses.\n", nombrePaires);

    return 0;
}
