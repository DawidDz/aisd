/*
 * magazyn-1.c
 *
 * Program "Magazyn" ze strukturą i funkcjami operującymi na tej strukturze.
 *
 * Repozytorium: https://github.com/ioResources/aisd
 */

#include <stdio.h>
#include <stdlib.h>

//struktura reprezentująca towar
typedef struct {
    char nazwa[30];
    float cena_jedn;
    int stan_mag;
} Towar;

//funkcja wyświetlająca opis towaru
void wyswietl(Towar* towar) {
    printf("%-30s | %7.2f | %3d\n",
        towar->nazwa,
        towar->cena_jedn,
        towar->stan_mag);
}

//funkcja obliczająca wartość
float obliczWartosc(Towar* towar) {
    return towar->cena_jedn * towar->stan_mag;
}

//funkcja obniżająca cenę towaru
void obnizCene(Towar* towar, int obnizka) {
    towar->cena_jedn = towar->cena_jedn * (1 - obnizka/100.0);
}

int main() {
    Towar t1 = {"Endura Singletrack II", 329.00, 15};
    Towar t2 = {"Kaseta Shimano SLX CS-HG80", 168.00, 3};

    wyswietl(&t1);
    printf("Wartość: %.2f\n\n", obliczWartosc(&t1));

    wyswietl(&t2);
    printf("Wartość: %.2f\n\n", obliczWartosc(&t2));

    obnizCene(&t1, 10);
    printf("Po obniżce o 10%\n");
    wyswietl(&t1);

    return 0;
}
