/*
 * ZADATAK 08113010 - 08113010
 * Izračunati aritmetičku sredinu prirodnih brojeva do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113010.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od 1 do n\n");
int n, i;                    // deklarisanje varijabli
double as, br, s;            // deklarisanje varijabli

printf("Do broja: ");
scanf("%d", &n);             // ulaz n

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = 1; i <= n; ++i) {   // ponavljanje za i=1 do i=n - pocetak petlje
s = s + i;               // uvecaj s za vrijednosti i; s=s+i
br = br + 1;             // uvecaj brojac br = br + 1;
}

as=s/br;                       // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}