/*
 * ZADATAK 08111040 - 08111040
 * Ispisati prirodne brojeve od 1 do 17 koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111040.htm
 */

#include <stdio.h>

int main()
{
int i, a;                         // deklarisanje varijabli i, a
printf("Nisu djeljivi sa a od 1 do 17 \n");  // naslov   \n - prelazak u novi red
printf("Unesite djelioca: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                  // ucitavanje vrijednosti varijable a sa tastature
for(i = 1; i <= 17; i++)          // ponavljanje za i=1 do i=17 - pocetak petlje
if(i % a != 0)                // i nije djeljivo sa a?
printf("%d ",i);          // i nije djeljivo sa a: ispis i
return 0;
}