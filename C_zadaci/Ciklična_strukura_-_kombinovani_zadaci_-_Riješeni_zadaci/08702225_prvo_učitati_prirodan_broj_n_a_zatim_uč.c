/*
 * ZADATAK 34 - 08702225
 * Prvo učitati prirodan broj n, a zatim učitati n cijelih brojeva te izračunati sumu koji nisu djeljivi sa 3.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702225.htm
 */

#include <stdio.h>

int main ()
{
printf("Od n brojeva izracunati sumu brojeva koji nisu djeljivi sa 3.\n");
int n, a;
printf("Koliko brojeva : ");
scanf("%d", &n);              // koliko brojeva će se ucitati
int s=0;    // pocetna vrijednost sume

for (int i=1; i<= n; i++) {   // ponavljaj n puta ucitavanje
printf("%d. broj ", i );
scanf("%d", &a);          // ucitaj broj
if (a % 3 != 0   )        // nisju djeljivi sa 3 (paran)?
s = s + a;            // nisu djeljivi sa 3, uvecaj sumu
}

printf("Suma je %d ", s);     // ispis susme
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati sumu brojeva koji nisu djeljivi sa 3.
Koliko brojeva : 4
1. broj 2
2. broj 6
3. broj 4
4. broj 9
Suma je 6