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
        printf("Vrai.\n");
    } else {
        printf("Faux.\n");
    }

    return 0;
}
