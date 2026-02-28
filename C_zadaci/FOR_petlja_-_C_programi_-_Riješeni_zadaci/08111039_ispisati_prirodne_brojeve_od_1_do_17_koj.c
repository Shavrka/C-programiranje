/*
 * ZADATAK 22 - 08111039
 * Ispisati prirodne brojeve od 1 do 17 koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111039.htm
 */

#include <stdio.h>

int main ()
{
int i, a;                              // deklarisanje varijabli i, a
printf("Djeljivi sa a od 1 do 17 \n"); // naslov   \n - prelazak u novi red
printf("Unesite djelioca: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                       // ucitavanje vrijednosti varijable a sa tastature
for(i = 1; i <= 17; i++)               // ponavljanje za i=1 do i=17 - pocetak petlje
if(i % a == 0)                     // i djeljivo sa a?
printf("%d\n",i);              // i djeljivo sa a: ispis i

return 0;
}