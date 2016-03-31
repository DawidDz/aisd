/*
 * magazyn-2.c
 * 
 * Program "Magazyn" ze strukturą zawierającą dane oraz funkcje
 * operujące na tych danych.
 *
 * Repozytorium: https://github.com/ioResources/aisd
 */

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

//struktura reprezentująca towar
//przechowuje dane oraz funkcje
typedef struct {
    char nazwa[30];
    float cena_jedn;
    int stan_mag;

    //funkcja wyświetlająca opis towaru
    void wyswietl() {
        printf("%-30s | %7.2f | %3d\n",
            nazwa,
            cena_jedn,
            stan_mag);
    }

    //funkcja obliczająca wartość
    float obliczWartosc() {
        return cena_jedn * stan_mag;
    }

    //funkcja obniżająca cenę towaru
    void obnizCene(int obnizka) {
        cena_jedn = cena_jedn * (1 - obnizka/100.0);
    }

} Towar;


int main() {
    Towar t1 = {"Endura Singletrack II", 329.00, 15};
    Towar t2 = {"Kaseta Shimano SLX CS-HG80", 168.00, 3};

    t1.wyswietl();
    printf("Wartość: %.2f\n\n", t1.obliczWartosc());

    t2.wyswietl();
    printf("Wartość: %.2f\n\n", t2.obliczWartosc());

    t1.obnizCene(10);
    printf("Po obniżce o 10%\n");
    t1.wyswietl();

    return 0;
}
