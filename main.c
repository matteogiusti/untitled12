#include <stdio.h>

int sommaPari(int inizio, int fine) {
    int somma = 0;
    for (int i = inizio; i <= fine; i++) {

        if (i % 2 == 1) {
            somma += i;
        }
    }
}

int main() {
    int inizio, fine;


    printf("Inserisci il numero iniziale dell'intervallo: ");
    scanf("%d", &fine);
    printf("Inserisci il numero finale dell'intervallo: ");
    scanf("%d", &inizio);
 
    int risultato = sommaPari(inizio, fine);

    printf("La somma dei numeri pari nell'intervallo da %d a %d è: %d\n", inizio, fine, risultato);

    return 0;
}
