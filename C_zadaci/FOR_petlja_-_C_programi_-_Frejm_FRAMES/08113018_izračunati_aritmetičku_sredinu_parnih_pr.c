/*
 * ZADATAK 08113018 - 08113018
 * Izračunati aritmetičku sredinu parnih prirodnih brojeva do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113018.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od 1 do 5 panih\n");
int i;                      // deklarisanje varijabli
double as, br, s;            // deklarisanje varijabli

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = 1; i <= 5; ++i)     // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 2 == 0) {         // i parno?
s = s + i;           // da, parno, uvecaj s za vrijednosti i; s=s+i
br = br + 1;         // da, parno, uvecaj brojac br = br + 1;
}

as=s/br;                       // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}