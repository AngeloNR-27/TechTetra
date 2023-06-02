#include <stdio.h>

int existeInvOuOppConsecutifs(int T[], int taille) {
    int i;
    for (i = 0; i < taille - 1; i++) {
        if (T[i] == -T[i+1]) {
            return 1; // Vrai
        }
    }
    return 0; // Faux
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];
    printf("Entrez les valeurs du tableau :\n");
    int i;
    for (i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }

    if (existeInvOuOppConsecutifs(tableau, taille)) {
        printf("Vrai.\n");
    } else {
        printf("Faux.\n");

    }

    return 0;
}
