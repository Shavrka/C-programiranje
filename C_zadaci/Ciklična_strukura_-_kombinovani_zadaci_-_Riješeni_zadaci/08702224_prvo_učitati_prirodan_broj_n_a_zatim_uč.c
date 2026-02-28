/*
 * ZADATAK 31 - 08702224
 * Prvo učitati prirodan broj n, a zatim učitati n cijelih brojeva te izračunati sumu parnih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702224.htm
 */

#include <stdio.h>

int main ()
{
printf("Od n brojeva izracunati sumu parnih brojeva\n");
int n, a;
printf("Koliko brojeva : ");
scanf("%d", &n);              // koliko brojeva će se ucitati
int s=0;    // pocetna vrijednost sume

for (int i=1; i<= n; i++) {   // ponavljaj n puta ucitavanje
printf("%d. broj ", i );
scanf("%d", &a);          // ucitaj broj
if (a % 2 == 0   )        // djeljivi sa 2 (paran)?
s = s + a;            // da - paran, uvecaj sumu
}

printf("Suma je %d ", s);     // ispis susme
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati sumu parnih brojeva
Koliko brojeva : 4
1. broj 2
2. broj 5
3. broj 3
4. broj 4
Suma je 6