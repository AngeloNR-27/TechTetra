#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure repr�sentant une lettre avec sa version en ASCII et en morse
typedef struct {
    char ascii;
    char morse[5];
} Letter;

int main() {
    // D�claration et initialisation du dictionnaire de lettres
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

    // R�cup�ration des mots en ASCII
    char mots[100];  // Modifier la taille selon vos besoins
    printf("Entrez les mots en ASCII : ");
    fgets(mots, sizeof(mots), stdin);

    // Suppression du caract�re de saut de ligne � la fin de la cha�ne
    mots[strcspn(words, "\n")] = '\0';

    // R�cup�ration de la s�quence de caract�res morse sans s�parateurs
    char morseSequence[100];  // Modifier la taille selon vos besoins

    printf("Entrez la s�quence de caract�res morse : ");
    fgets(morseSequence, sizeof(morseSequence), stdin);

    // Suppression du caract�re de saut de ligne � la fin de la cha�ne
    morseSequence[strcspn(morseSequence, "\n")] = '\0';

    // Parcours de la s�quence de caract�res morse pour trouver les lettres correspondantes
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

