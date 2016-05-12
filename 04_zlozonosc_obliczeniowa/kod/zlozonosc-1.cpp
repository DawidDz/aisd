/*
 * zlozonosc-1.cpp
 *
 * wykład 6
 * Porównanie złożoności algorytmów iteracyjnych i rekurencyjnych na przykładzie
 * silni i ciągu Fibonacciego
 *
 * Repozytorium: https://github.com/ioResources/aisd
 */

#include <iostream>

using namespace std;

int tc; //licznik operacji porównania

/*
 * silnia - podejście iteracyjne
 */
int silniaIt(int n) {
    int wynik = 1;
    ++tc;
    while (n > 0) {
        ++tc;
        wynik = wynik * n;
        --n;
    }
    return wynik;
}

/*
 * silnia - podejście rekurencyjne
 */
int silniaRek(int n) {
    ++tc;
    if (n < 2) {
        return 1;
    } else {
        return n * silniaRek(n-1);
    }
}

/*
 * fib - podejście rekurencyjne
 */
int fibRek(int n) {
    ++tc;
    if (n < 2) {
        return n;
    } else {
        return fibRek(n-1) + fibRek(n-2);
    }
}

/*
 * fib - podejście iteracyjne
 */
int fibIt(int n) {
    int wynik = 0,
        n_1 = 1,
        n_2 = 0;
    ++tc;    
    if (n < 2) {
        wynik = n;
    } else {
        for (int i=2; i<=n; ++i) {
            ++tc;
            wynik = n_1 + n_2;
            n_2 = n_1;
            n_1 = wynik;
        }
    }
    return wynik;
}


int main() {
    //badanie funkcji silnia
    cout << "Funkcja silnia(n)" << endl;
    cout << "n; tc_rek; tc_it" << endl;
    for (int n=0; n<=40; ++n) {
        tc = 0;
        silniaRek(n);
        cout << n << "; " << tc;
        tc = 0;
        silniaIt(n);
         cout << "; " << tc << endl;
    }

    //badanie funkcji fib
    cout << "Funkcja fib(n)" << endl;
    cout << "n; tc_rek; tc_it" << endl;
    for (int n=0; n<=40; ++n) {
        tc = 0;
        fibRek(n);
        cout << n << "; " << tc;
        tc = 0;
        fibIt(n);
        cout << "; " << tc << endl;
    }

    return 0;
}





