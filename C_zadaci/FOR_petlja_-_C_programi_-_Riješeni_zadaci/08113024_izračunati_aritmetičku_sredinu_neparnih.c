/*
 * ZADATAK 197 - 08113024
 * Izračunati aritmetičku sredinu neparnih prirodnih brojeva do 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113024.htm
 */

#include <stdio.h>
int main ()
{
printf("Aritmeticka sredina brojeva od 1 do 5 nepanih\n");
int i, s, br;                // deklarisanje varijabli
double as;                   // deklarisanje varijabli

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = 1; i <= 5; ++i)     // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 2 != 0)  {        // broj nije djeljiv sa 2, neparan
s = s + i;           // da, i nije djeljivao sa 2 - neparan, uvecaj s za vrijednosti i; s=s+i
br++;                // da, i nije djeljivao sa 2 - neparan, uvecaj brojac br = br + 1;
}

as=s/br;                       // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}