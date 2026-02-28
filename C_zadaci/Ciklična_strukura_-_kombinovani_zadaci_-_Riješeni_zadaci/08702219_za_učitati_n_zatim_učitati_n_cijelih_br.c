/*
 * ZADATAK 54 - 08702219
 * Za učitati n. Zatim učitati n cijelih brojeva te izračunati sumu jednocifrenih i proizvod višecifrenih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702219.htm
 */

#include <stdio.h>

int main()
{
printf("sumu jednocifrenih i proizvod višecifrenih brojeva\n");  // naslov
int i, n, a;                  // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume
float p = 1;                  // pocetna vrijednost proizvoda
printf("Koliko brojeva: ");
scanf("%d", &n);              // koliko ucitanih brojeva

for (i=1; i <= n; i++) {      // za n brojeva radi
printf("Novi broj: ");
scanf("%d", &a);          // koliko ucitanih brojeva
if (a < 10)               // ucitani broj jednocifren?
s = s + a;            // da - jednocifren, uvecaj sumu
else                      // neparan
p = p * a;            // uvecaj proizvod
}
printf("suma = %d, ", s);     // ispis sume
printf("proizvod = %f", p);   // ispis proizvoda
return 0;
}

Ispis na ekranu:
sumu jednocifrenih i proizvod višecifrenih brojeva
Koliko brojeva: 5
Novi broj: 4
Novi broj: 11
Novi broj: 2
Novi broj: 10
Novi broj: 20
suma = 6, proizvod = 2200.000000