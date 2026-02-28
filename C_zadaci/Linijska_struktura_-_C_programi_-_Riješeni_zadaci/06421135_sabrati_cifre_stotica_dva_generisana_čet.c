/*
 * ZADATAK 181 - 06421135
 * Sabrati cifre stotica dva generisana četverocifrena slučajna broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421135.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int i, broj1, broj2, stotica1, stotica2, suma;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

broj1 = rand() % 9000 + 1000;
broj2 = rand() % 9000 + 1000;

stotica1 = (broj1 / 100) % 10; // stotica1 od broj1
stotica2 = (broj2 / 100) % 10; // stotica2 od broj2
suma = stotica1 + stotica2; // suma jedinica dva broja

printf("Generisani brojevi %d i %d\n",  broj1, broj2);
printf("Suma stotica %d + %d = %d\n",  stotica1, stotica2, suma);

getchar();
}