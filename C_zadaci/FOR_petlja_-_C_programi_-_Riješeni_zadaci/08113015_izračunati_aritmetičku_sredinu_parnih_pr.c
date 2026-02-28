/*
 * ZADATAK 204 - 08113015
 * Izračunati aritmetičku sredinu parnih prirodnih brojeva od 1 do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113015.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od 1 do n panih\n");
int n, i;                    // deklarisanje varijabli
double as, br, s;            // deklarisanje varijabli

printf("Do broja: ");
scanf("%d", &n);             // ulaz n

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = 1; i <= n; ++i)     // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0) {         // i parno?
s = s + i;           // da, parno, uvecaj s za vrijednosti i; s=s+i
br = br + 1;         // da, parno, uvecaj brojac br = br + 1;
}

as=s/br;                       // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}