/*
 * ZADATAK 214 - 08113020
 * Izračunati aritmetičku sredinu neparnih brojeva od k do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113020.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od k do n - neparni, nisu djeljivi sa 2\n");
int i, k, n;                 // deklarisanje varijabli i, k, n
double s, br, as;            // deklarisanje varijabli

printf("Od broja: ");
scanf("%d", &k);             // ulaz k
printf("Do broja: ");
scanf("%d", &n);             // ulaz n

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = k; i <= n; ++i)     // ponavljanje za i=k do i=n - pocetak petlje
if(i % 2 != 0)  {        // broj nije djeljiv sa 2, neparan
s = s + i;           // da, i nije djeljivao sa 2 - neparan, uvecaj s za vrijednosti i; s=s+i
br++;                // da, i nije djeljivao sa 2 - neparan, uvecaj brojac br = br + 1;
}

as=s/br;                       // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}