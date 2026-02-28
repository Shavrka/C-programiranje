/*
 * ZADATAK 151 - 06421114
 * Ispisati generisani trocifren slučajan broj.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421114.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

/* Ispis random trocifren broj (100 <= n <= 999) */
printf("Slučajan trocifren broj = %d\n", rand() % 900 + 100);
return(0);
}

Ispis na ekranu:
Slučajan trocifren broj = 746