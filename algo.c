#include <stdio.h>

int InvOuOpp(float a, float b) {
    float somme = a + b;
    float produit = a * b;

    if (somme == 0 || produit == 1) {
        return 1; // Vrai
    } else {
        return 0; // Faux
    }
}

int main() {
    float a, b;
    printf("Entrez deux nombres : ");
    scanf("%f %f", &a, &b);

    if (InvOuOpp(a, b)) {
        printf("Les nombres sont inverses ou opposes.\n");
    } else {
        printf("Les nombres ne sont pas inverses ni opposes.\n");
    }

    return 0;
}
