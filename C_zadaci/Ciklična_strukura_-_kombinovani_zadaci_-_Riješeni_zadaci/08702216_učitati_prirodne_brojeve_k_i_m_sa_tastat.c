/*
 * ZADATAK 57 - 08702216
 * Učitati prirodne brojeve K i M sa tastature. Od broja K izračunati proizvod M parnih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702216.htm
 */

#include <stdio.h>

int main ()
{
printf("Od k izracunati proizvod m parnih brojeva\n");
int i, k, m, brpar, p;        // deklarisanje varijabli
printf("Od broja k: ");
scanf("%d", &k);              // od kog broj pocinje pretraga neparnih
printf("Koliko parnih m: ");
scanf("%d", &m);              // koliko parnih treba ucitati

brpar = 0;                    // pocetna vrijednost brojaca parnih
p=1;                          // pocetna vrijednost proizvoda

for (i=k; brpar < m; i++)     // ponavljanje za i=k dok je brojac parnih brpar < m - pocetak petlje
if (i % 2 == 0) {         // broj paran?
p = p * i;            // uvecaj proizvod
brpar++;              // uvecaj brojac parnih
}

printf("Proizvod je %d ", p); // ispis proizvoda
return 0;
}

Ispis na ekranu:
Od broja k = 2
Željeni broj m = 3
Od 2 proizvod 3 parnih je 48