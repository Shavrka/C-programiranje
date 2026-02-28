/*
 * ZADATAK 150 - 06421112
 * Ispisati generisani dvocifren slučajan broj.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421112.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int i;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

/* Ispis random dvocifren broj (10<= n <= 99) */
printf("Slučajan dvocifren broj = %d\n", rand() % 90 + 10);

getchar();
}