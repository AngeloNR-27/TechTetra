#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure représentant une lettre avec sa version en ASCII et en morse
typedef struct {
    char ascii;
    char morse[5];
} Letter;

int main() {
    // Déclaration et initialisation du dictionnaire de lettres
    Letter dictionary[] = {
        {'A', ".-"},
        {'B', "-..."},
        {'C', "-.-."},
        {'D', "-.."},
        {'E', "."},
        {'F', "..-."},
        {'G', "--."},
        {'H', "...."},
        {'I', ".."},
        {'J', ".---"},
        {'K', "-.-"},
        {'L', ".-.."},
        {'M', "--"},
        {'N', "-."},
        {'O', "---"},
        {'P', ".--."},
        {'Q', "--.-"},
        {'R', ".-."},
        {'S', "..."},
        {'T', "-"},
        {'U', "..-"},
        {'V', "...-"},
        {'W', ".--"},
        {'X', "-..-"},
        {'Y', "-.--"},
        {'Z', "--.."}
        // Ajouter les autres lettres du dictionnaire ici
    };

    // Taille du dictionnaire
    int dictionarySize = sizeof(dictionary) / sizeof(Letter);

    // Récupération des mots en ASCII
    char mots[100];  // Modifier la taille selon vos besoins
    printf("Entrez les mots en ASCII : ");
    fgets(mots, sizeof(mots), stdin);

    // Suppression du caractère de saut de ligne à la fin de la chaîne
    mots[strcspn(words, "\n")] = '\0';

    // Récupération de la séquence de caractères morse sans séparateurs
    char morseSequence[100];  // Modifier la taille selon vos besoins

    printf("Entrez la séquence de caractères morse : ");
    fgets(morseSequence, sizeof(morseSequence), stdin);

    // Suppression du caractère de saut de ligne à la fin de la chaîne
    morseSequence[strcspn(morseSequence, "\n")] = '\0';

    // Parcours de la séquence de caractères morse pour trouver les lettres correspondantes
    char* token = strtok(morseSequence, " ");
    printf("Les lettres correspondantes sont : ");
    while (token != NULL) {
        // Recherche de la lettre correspondante dans le dictionnaire
        int i;
        for (i = 0; i < dictionarySize; i++) {
            if (strcmp(dictionary[i].morse, token) == 0) {
                printf("%c ", dictionary[i].ascii);
                break;
            }
        }
        token = strtok(NULL, " ");
    }

    printf("\n");

    return 0;
}

