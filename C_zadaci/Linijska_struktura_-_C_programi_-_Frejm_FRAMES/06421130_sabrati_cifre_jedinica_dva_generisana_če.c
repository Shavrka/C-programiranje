/*
 * ZADATAK 06421130 - 06421130
 * Sabrati cifre jedinica dva generisana četverocifrena slučajna broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06421130.htm
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

suma = broj1 % 10 + broj2 % 10; // suma jedinica dva broja

printf("Generisani brojevi %d i %d\n",  broj1, broj2);
printf("Suma jedinica brojeva je = %d\n", suma);

getchar();
}