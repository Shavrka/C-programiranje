/*
 * ZADATAK 06421121 - 06421121
 * Napisati program koji generiše dvocifren broj, ispiše ga. Zatim ispiše cifre u obrnutom redoslijedu jednu ispod druge.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06421121.htm
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

printf("Slucajan dvocifren broj = %d\n", sl_broj);
printf("cifra jedinica %d\n", jed);
printf("cifra desetica %d\n", des);

getchar();
}