/*
 * ZADATAK 08113034 - 08113034
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113034.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od 1 do n nisu djeljivi sa a\n");
int i, s, br, a, n;          // deklarisanje varjabli
float as;                    // deklarisanje varjable as

printf("Do broja: ");
scanf("%d", &n);             // ulaz n
printf("Djelilac: ");
scanf("%d", &a);             // ulaz a

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost kumulativnog brojaca
for(i = 1; i <= n ; i++)     // ponavljanje za i=1 do i=n - pocetak petlje
if (i % a != 0) {        // broj nije djeljiv sa a?
s=s+i;                // da, uvecaj s za vrijednosti i; s=s+i
br=br+1;              // da, uvecaj br za vrijednosti 1; br=br+1
}

as = (float)s / br;          // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis

return 0;
}