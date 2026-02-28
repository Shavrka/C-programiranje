/*
 * ZADATAK 06421123 - 06421123
 * Sabrati cifre generisanog trocifrenog slučajnog broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06421123.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int main () {
int x, y, z, pom, sl_broj;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

/* Random trocifren broj (100 <= n <= 999) */
sl_broj = rand() % 900 + 100;   // slucajan broj
printf("Slucajan trocifren broj = %d\n", sl_broj);

z = sl_broj % 10;      // cifra jedinica
pom = sl_broj / 10;    // prve dvije cifre
y = pom % 10;          // cifra desetica (iz dvocifrenog dijela)
x = pom / 10;          // cifra stotica  (iz dvocifrenog dijela)

printf("Suma cifara = %d", x + y + z);  // ispis

getchar();
}