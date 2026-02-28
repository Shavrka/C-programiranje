/*
 * ZADATAK 06421117 - 06421117
 * Napisati program koji generiše dvocifren broj, ispiše ga. Zatim ispiše cifre generisanog broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06421117.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main () {
int i, sl_broj, jed, des;
time_t t;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t));
sl_broj = rand() % 90 + 10;
des = sl_broj / 10;         // cifra jedinica
jed = sl_broj % 10;         // cifra jedinica

/* Ispis random dvocifren broj (10<= n <= 99) */
printf("Slucajan dvocifren broj = %d\n", sl_broj);
printf("desetica: %d   jedinica: %d\n",des, jed);

getchar();
}