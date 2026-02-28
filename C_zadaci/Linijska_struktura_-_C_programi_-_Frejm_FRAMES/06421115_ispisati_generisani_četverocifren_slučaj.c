/*
 * ZADATAK 06421115 - 06421115
 * Ispisati generisani četverocifren slučajan broj.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06421115.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

/* Ispis random trocifren broj (1000 <= n <= 9999) */
printf("Slučajan cetverocifren broj = %d\n", rand() % 9000 + 1000);
return(0);
}