/*
 * ZADATAK 220 - 08113030
 * Izračunati aritmetičku sredinu prirodnih brojeva od k do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113030.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva od k do n nisu djeljivi sa a\n");
int i, k, n, a;              // deklarisanje varijabli i, k, n, a
double s, br, as;            // deklarisanje varijabli

printf("Od broja: ");
scanf("%d", &k);             // ulaz k
printf("Do broja: ");
scanf("%d", &n);             // ulaz n
printf("Djelilac: ");
scanf("%d", &a);             // ulaz a

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost brojaca

for (i = k; i <= n; ++i)     // ponavljanje za i=k do i=n - pocetak petlje
if(i % a != 0)  {        // broj nije djeljiv sa a
s = s + i;           // da, i nije djeljivao sa a, uvecaj s za vrijednosti i; s=s+i
br++;                // da, i nije djeljivao sa a, uvecaj brojac br = br + 1;
}

as=s/br;                       // aritmeticka sredina
printf("Aritmeticka sredina = %.4f",as);   // ispis
return 0;
}