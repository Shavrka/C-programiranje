/*
 * ZADATAK 168 - 06421111
 * Sabrati cifre generisanog dvocifrenog slučajnog broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421111.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int i, sl_broj, jed, des, suma;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));
sl_broj = rand() % 90 + 10;
des = sl_broj / 10;         // cifra jedinica
jed = sl_broj % 10;         // cifra jedinica
suma = des + jed;

printf("Slucajan dvocifren broj = %d\n", sl_broj);
printf("Suma cifara = %d\n", suma);

getchar();
}