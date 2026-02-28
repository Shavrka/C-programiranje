/*
 * ZADATAK 23 - 08111046
 * Ispisati prirodne brojeve od 1 do 5 koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111046.htm
 */

#include <stdio.h>

int main()
{
int i, a;                         // deklarisanje varijabli i, a
printf("Nisu djeljivi sa a od 1 do 5 \n");  // naslov   \n - prelazak u novi red
printf("Unesite djelioca: ");    // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                  // ucitavanje vrijednosti varijable a sa tastature
for(i = 1; i <= 5; i++)           // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % a != 0)                // i nije djeljivo sa a?
printf("%d ",i);          // i nije djeljivo sa a: ispis i
return 0;
}

II varijanta  int i = 1;
// 08111046
#include <stdio.h>

int main()
{
int a;                            // deklarisanje varijabli
printf("Nisu djeljivi sa a od 1 do 5 \n");  // naslov   \n - prelazak u novi red
printf("Unesite djelioca: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                  // ucitavanje vrijednosti varijable a sa tastature
for(int i = 1; i <= 5; i++)       // deklarisanje varijable i; ponavljanje za i=1 do i=5 - pocetak petlje
if(i % a != 0)                // i nije djeljivo sa a?
printf("%d ",i);          // i nije djeljivo sa a: ispis i
return 0;
}