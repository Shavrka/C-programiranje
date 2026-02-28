/*
 * ZADATAK 19_1 - 07211127
 * Učitati prirodan broj. Ispisati da li je djeljiv sa k ili nije.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211127.htm
 */

#include <stdio.h>
int main ()
{
printf("Provjera djeljivosti dva broja\n");     // naslov
int a, djel;               // deklarisanje varijabli
printf("Broj: ");     // ulaz
scanf("%d", &a);
printf("Djelilac: ");
scanf("%d", &djel);

if(a % djel == 0)         // da li je broj djeljiv?
printf("%d je djeljivo sa %d \tkolicnik =  %d ", a, djel, a / djel);
else
printf("%d nije djeljivo sa %d \tkolicnik =  %lf", a, djel, (double)a / djel);
return 0;
}