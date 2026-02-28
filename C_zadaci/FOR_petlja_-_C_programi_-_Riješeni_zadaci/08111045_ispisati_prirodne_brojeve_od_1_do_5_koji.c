/*
 * ZADATAK 21 - 08111045
 * Ispisati prirodne brojeve od 1 do 5 koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111045.htm
 */

#include <stdio.h>

int main()
{
int i, a;                              // deklarisanje varijabli
printf("Djeljivi sa a od 1 do 5 \n");  // naslov   \n - prelazak u novi red
printf("Unesite djelioca: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                       // ucitavanje vrijednosti varijable a sa tastature
for(i = 1; i <= 5; i++)                // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % a == 0)                     // i djeljivo sa a?
printf("%d ",i);               // i djeljivo sa a: ispis i

return 0;
}

II varijanta  int i = 1;
// 08111045
#include <stdio.h>

int main()
{
int a;                                 // deklarisanje varijabli
printf("Djeljivi sa a od 1 do 5 \n");  // naslov   \n - prelazak u novi red
printf("Unesite djelioca: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                       // ucitavanje vrijednosti varijable a sa tastature
for(int i = 1; i <= 5; i++)            // deklarisanje varijable i; ponavljanje za i=1 do i=5 - pocetak petlje
if(i % a == 0)                     // i djeljivo sa a?
printf("%d ",i);               // i djeljivo sa a: ispis i

return 0;
}