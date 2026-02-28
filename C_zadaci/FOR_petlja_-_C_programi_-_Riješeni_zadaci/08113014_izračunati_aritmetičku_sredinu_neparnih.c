/*
 * ZADATAK 203 - 08113014
 * Izračunati aritmetičku sredinu neparnih prirodnih brojeva od 1 do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113014.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od 1 do n - neparni, nisu djeljivi sa 2\n");
int i, n;                    // deklarisanje varijabli i, n
double s, br, as;            // deklarisanje varijabli

printf("Do broja: ");
scanf("%d", &n);             // ulaz n

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = 1; i <= n; ++i)     // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 != 0)  {        // broj nije djeljiv sa 2, neparan
s = s + i;           // da, i nije djeljivao sa 2 - neparan, uvecaj s za vrijednosti i; s=s+i
br++;                // da, i nije djeljivao sa 2 - neparan, uvecaj brojac br = br + 1;
}

as=s/br;                      // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}