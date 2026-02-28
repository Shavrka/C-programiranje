/*
 * ZADATAK 53 - 08702218
 * Za učitati n. Zatim učitati n cijelih brojeva te izračunati sumu neparnih i proizvod parnih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702218.htm
 */

#include <stdio.h>

int main ()
{
printf("Od n brojeva izracunati sumu neparnih i proizvoda parnih brojeva\n");
int i, n, a, s, p;
printf("Koliko brojeva : ");
scanf("%d", &n);              // koliko brojeva će se ucitati
s=0, p=1;                     // pocetna vrijednost sume i proizvoda

for (i=1; i<= n; i++) {       // ponavljaj n puta ucitavanje
printf("%d. broj ", i );
scanf("%d", &a);          // ucitaj broj
if (a % 2 != 0)           // ucitani broj neparan ili paran?
s = s + a;            // broj neparan, uvecaj sumu
else                      // paran
p = p * a;            // broj paran, uvecaj proizvod
}

printf("Suma neparnih je %d ", s);   // ispis susme
printf("Proizvod parnih je %d ", p); // ispis proizvoda
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati sumu parnih i proizvod neparnih brojeva
Koliko brojeva 5
1. broj 2
2. broj 3
3. broj 4
4. broj 5
5. broj 6
Suma = 8
Proizvod = 48