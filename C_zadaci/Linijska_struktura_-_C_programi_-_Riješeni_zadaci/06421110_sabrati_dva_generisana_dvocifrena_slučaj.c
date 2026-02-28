/*
 * ZADATAK 153 - 06421110
 * Sabrati dva generisana dvocifrena slučajna broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421110.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int i, broj1, broj2, suma;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

broj1 = rand() % 90 + 10;
broj2 = rand() % 90 + 10;

suma = broj1 + broj2;

/* Ispis random dvocifren broj (10<= n <= 99) */
printf("Generisani brojevi %d i %d\n",  broj1, broj2);
printf("Suma brojeva je = %d\n", suma);

getchar();
}