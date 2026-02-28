/*
 * ZADATAK 08113019 - 08113019
 * Izračunati aritmetičku sredinu parnih brojeva od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113019.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od k do n panih\n");
int n, k, i;                 // deklarisanje varijabli
double as, br, s;            // deklarisanje varijabli

printf("Od broja: ");
scanf("%d", &k);             // ulaz k
printf("Do broja: ");
scanf("%d", &n);             // ulaz n

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = k; i <= n; ++i)     // ponavljanje za i=k do i=n - pocetak petlje
if(i % 2 == 0) {         // i parno?
s = s + i;           // da, parno, uvecaj s za vrijednosti i; s=s+i
br = br + 1;         // da, parno, uvecaj brojac br = br + 1;
}

as=s/br;                       // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}