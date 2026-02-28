/*
 * ZADATAK 06421129 - 06421129
 * Sabrati cifre jedinica dva generisana trocifrena slučajna broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06421129.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int main () {
int j1, j2, sl_broj1, sl_broj2, suma;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));

/* Random trocifren broj (100 <= n <= 999) */
sl_broj1 = rand() % 900 + 100;   // slucajan broj
sl_broj2 = rand() % 900 + 100;   // slucajan broj
printf("1. Slucajan trocifren broj = %d\n", sl_broj1);
printf("2. Slucajan trocifren broj = %d\n", sl_broj2);

j1 = sl_broj1 % 10;   // cifra jedinica prvog broja
j2 = sl_broj2 % 10;   // cifra jedinica drugog broja
suma = j1 + j2;       // prve dvije cifre

printf("Suma jedinica oba broja = %d", suma);  // ispis

getchar();
}