/*
 * ZADATAK 155 - 06421116
 * Sabrati dva generisana četverocifrena slučajna broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421116.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int i, broj1, broj2, suma;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

broj1 = rand() % 9000 + 1000;
broj2 = rand() % 9000 + 1000;

suma = broj1 + broj2;

printf("Generisani brojevi %d i %d\n",  broj1, broj2);
printf("Suma brojeva je = %d\n", suma);

getchar();
}