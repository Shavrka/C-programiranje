/*
 * ZADATAK 163 - 06421122
 * Napisati program koji generiše trocifren broj, ispiše ga. Zatim ispiše cifre u obrnutom redoslijedu jednu ispod druge.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421122.htm
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

printf("Cifra jedinica= %d\n", z);  // ispis
printf("Cifra desetica= %d\n", y);  // ispis
printf("Cifra stotica= %d", x);  // ispis

getchar();
}