/*
 * oceny-1.c
 *
 * Przypomnienie języka C - program "Oceny"
 *
 * Repozytorium: https://github.com/ioResources/aisd
 */

#include <stdio.h>
#include <stdlib.h>

#define LICZBA_OCEN 5

//globalna zmienna (tablica) do przechowywania ocen
float oceny[LICZBA_OCEN] = {};

//funkcja wyświetlająca oceny
void wyswietl() {
    int i;
    for (i=0; i<LICZBA_OCEN; ++i) {
        printf("%.1f\n", oceny[i]);
    }
}

//funkcja obliczająca średnią ocen
float srednia() {
    float suma = 0;
    int i;
    for (i=0; i<LICZBA_OCEN; ++i) {
        suma = suma + oceny[i];
    }
    return suma / LICZBA_OCEN;
}

//główna funkcja
int main() {
    oceny[0] = 4.5;
    oceny[1] = 5;
    oceny[2] = 3.5;
    wyswietl();
    oceny[3] = 3;
    oceny[4] = 5;
    wyswietl();
    printf("Średnia: %.2f", srednia());

    return 0;
}
