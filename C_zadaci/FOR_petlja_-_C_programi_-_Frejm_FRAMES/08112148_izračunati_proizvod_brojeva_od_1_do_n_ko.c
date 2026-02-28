/*
 * ZADATAK 08112148 - 08112148
 * Izračunati proizvod brojeva od 1 do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112148.htm
 */

#include <stdio.h>

int main ()
{
printf("Proizvod od 1 do n nisu djeljivi sa a\n"); // naslov
int i, n, a, p=1;         // deklarisanje varjabli
printf("Do broja: ");
scanf("%d", &n);          // ulaz n

printf("Unesi djelioca: ");
scanf("%d",&a);           // ulaz a

for (i=1; i <= n; ++i)    // ponavljanje za i=1 do i=n - pocetak petlje
if(i % a != 0)        // broj nije djeljiv sa a?
p = p * i;        // da, nije djeljiv, nova vrijednost proizvoda

printf("Proizvod = %d", p);
return 0;
}