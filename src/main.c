#include <stdio.h>
#include <stdlib.h>
#include "../include/station.h"

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Fichier : %s \n", argv[0]);
        return 1;
    }

    int nb_stations = 0;
    Station *stations = init_station(argv[1], &nb_stations);

    for (int i = 0; i < nb_stations; i++) afficher(stations[i]);;
    

    for (int i = 0; i < nb_stations; i++) {
        free(stations[i]->name);
        free(stations[i]);
    }
    free(stations); 
}
