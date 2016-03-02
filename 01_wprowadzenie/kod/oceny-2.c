/*
 * oceny-2.c
 *
 * Program "Oceny" ze strukturą.
 *
 * Repozytorium: https://github.com/ioResources/aisd
 */

#include <stdio.h>
#include <stdlib.h>

#define LICZBA_OCEN 5

//struktura przechowująca imię i nazwisko oraz oceny studenta
typedef struct {
    //pole tekstowe (string)
    char imie_nazwisko[50];
    //tablica do przechowywania ocen
    float oceny[LICZBA_OCEN];
} Student;

//funkcja wyświetlająca oceny
void wyswietl(Student* student) {
    printf("%s\n", student->imie_nazwisko);

    int i;
    for (i=0; i<LICZBA_OCEN; ++i) {
        printf("%.1f\n", student->oceny[i]);    //alternatywny zapis: (*student).oceny[i]
    }
}

//funkcja obliczająca średnią ocen
float srednia(Student* student) {
    float suma = 0;
    int i;
    for (i=0; i<LICZBA_OCEN; ++i) {
        suma = suma + student->oceny[i];
    }
    return suma / LICZBA_OCEN;
}

//główna funkcja
int main() {
    Student s;
    strcpy(s.imie_nazwisko, "Natalia Pilna");
    s.oceny[0] = 4.5;
    s.oceny[1] = 5;
    s.oceny[2] = 3.5;
    s.oceny[3] = 3;
    s.oceny[4] = 5;
    wyswietl(&s);
    printf("Średnia: %.2f\n", srednia(&s));

    //gdybyśmy chcieli utworzyć grupę studentów:
    Student grupa[12];  //tablica struktur

    strcpy(grupa[0].imie_nazwisko, "Janek Nierób");
    grupa[0].oceny[0] = 2;
    //... i tak dalej
    wyswietl(&grupa[0]);    //wyświetlamy dane pierwszego studenta z grupy


    return 0;
}
