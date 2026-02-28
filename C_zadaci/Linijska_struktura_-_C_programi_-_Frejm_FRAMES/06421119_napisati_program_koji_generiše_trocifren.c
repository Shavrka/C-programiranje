/*
 * ZADATAK 06421119 - 06421119
 * Napisati program koji generiše trocifren broj, ispiše ga. Zatim ispiše cifre u obrnutom redoslijedu.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06421119.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int n, a, b, c, pom;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

n  = rand() % 900 + 100;   //  slucajan trocifren broj
/* Ispis random trocifren broj (100 <= n <= 999) */
printf("Generisan slučajan trocifren broj = %d\n", n);

/* Izdvajanje */
c = (n % 10);      // cifra jedinica
pom = n / 10;      // prve dvije cifre
b = (pom % 10);    // cifra desetica
a = pom / 10;      // cifra stotica
printf("Obrnut raspored cifara = %d\n", 100 * c + b * 10 + a);

getchar();
}

Ispis na ekranu:

Index