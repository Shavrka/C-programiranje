/*
 * ZADATAK 200 - 08113037
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113037.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od 1 do 5 djeljivih sa a\n");
int i, s, br, a;             // deklarisanje varjabli
float as;                    // deklarisanje varjable as

printf("Djelilac: ");
scanf("%d", &a);             // ulaz a

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost kumulativnog brojaca
for(i = 1; i <= 5 ; i++)     // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % a == 0) {         // broj djeljiv sa a?
s=s+i;                // da, uvecaj s za vrijednosti i; s=s+i
br=br+1;              // da, uvecaj br za vrijednosti 1; br=br+1
}

as = (float)s / br;          // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis

return 0;
}