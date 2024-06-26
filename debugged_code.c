#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() {
    char scelta; //variabile per memorizzare la scelta dell'utente
    do {
        menu(); //mostra il menù delle opzioni
        printf("Inserisci qui la tua scelta: ");
        scanf(" %c", &scelta); //legge la scelta dell'utente
        switch (scelta) {
            case 'A':
            case 'a':
                moltiplica();
                break;
            case 'B':
            case 'b':
                dividi();
                break;
            case 'C':
            case 'c':
                ins_string();
                break;
            case 'D':
            case 'd':
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida.\n");
                break;
        }

        if (scelta != 'D' && scelta != 'd') {
            printf("Vuoi fare qualcos'altro? (S/N): ");
            char continua;
            scanf(" %c", &continua);
            if (continua == 'N' || continua == 'n') {
                scelta = 'D';
                printf("Uscita dal programma.\n");
            }
        }
    } while (scelta != 'D' && scelta != 'd');

    return 0;
}

void menu() { // Funzione che mostra il menu
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Uscire\n");
}
// Funzione per moltiplicare due numeri
void moltiplica() {
    int a, b;
    printf("Inserisci il primo numero: ");
    while (scanf("%d", &a) != 1) {     // Controlla che l'input sia valido
        while (getchar() != '\n'); // Pulisce il buffer
        printf("Per favore inserisci un numero valido: ");
    }
    printf("Inserisci il secondo numero: ");
    while (scanf("%d", &b) != 1) {
        while (getchar() != '\n'); 
        printf("Per favore inserisci un numero valido: ");
    }

    int prodotto = a * b;
    printf("Il prodotto tra %d e %d è: %d\n", a, b, prodotto);
}
// Funzione per dividere due numeri
void dividi() {
    float a, b;
    printf("Inserisci il numeratore: ");
    while (scanf("%f", &a) != 1) {
        while (getchar() != '\n'); 
        printf("Per favore inserisci un numero valido: ");
    }
    printf("Inserisci il denominatore: ");
    while (scanf("%f", &b) != 1) {
        while (getchar() != '\n'); 
        printf("Per favore inserisci un numero valido: ");
    }

    if (b != 0) {
        float divisione = a / b;
        printf("La divisione tra %f e %f è: %f\n", a, b, divisione);
    } else {
        printf("Impossibile dividere per zero.\n");
    }
}
// Funzione per inserire una stringa
void ins_string() {
    char stringa[11]; // Buffer per la stringa con massimo 10 caratteri
    printf("Inserisci una stringa di massimo 10 caratteri: "); 
    scanf(" %10[^\n]", stringa);// Legge una stringa di massimo 10 caratteri
    printf("La stringa inserita è: %s\n", stringa);
}

