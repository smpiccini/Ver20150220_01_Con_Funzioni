#include <stdio.h>
#include <stdlib.h>

const int N=5;
const int eta=18;

int selezionePersone(int persone[],int dimensione);

int main(int argc, char** argv) {

    int persone[N];
    int maggiorenni=0;
    int i=0;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    while (i<N) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &persone[i]);
        i++;
    }
    maggiorenni=selezionePersone(persone, N);
    printf("\n");
    printf("I maggiorenni sono: %d\n", maggiorenni);
    return (EXIT_SUCCESS);
    return (EXIT_SUCCESS);
}

int selezionePersone(int persone[], int dimensione) {
    int selezionati=0;
    int i=0;
    while (i<dimensione) {
        if (persone[i]>=eta) {
            selezionati++;
        }
        i++;
    }
    return selezionati;
}