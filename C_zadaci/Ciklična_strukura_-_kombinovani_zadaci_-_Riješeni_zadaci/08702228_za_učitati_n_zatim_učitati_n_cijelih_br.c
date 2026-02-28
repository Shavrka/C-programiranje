/*
 * ZADATAK 55 - 08702228
 * Za učitati n. Zatim učitati n cijelih brojeva te izračunati proizvod jednocifrenih i sumu višecifrenih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702228.htm
 */

#include <stdio.h>

int main()
{
printf("sumu višecifrenih i proizvod jednocifrenih višecifrenih brojeva\n");  // naslov
int i, n, a;                  // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume
float p = 1;                  // pocetna vrijednost proizvoda
printf("Koliko brojeva: ");
scanf("%d", &n);              // koliko ucitanih brojeva

for (i=1; i <= n; i++) {      // za n brojeva radi
printf("Novi broj: ");
scanf("%d", &a);          // koliko ucitanih brojeva
if (a < 10)               // ucitani broj jednocifren?
p = p * a;            // da - jednocifren, uvecaj proizvod
else                      // neparan
s = s + a;            // uvecaj sumu
}
printf("suma = %d, ", s);     // ispis sume
printf("proizvod = %f", p);   // ispis proizvoda
return 0;
}

Ispis na ekranu:
sumu višecifrenih i proizvod jednocifrenih višecifrenih brojeva
Koliko brojeva: 5
Novi broj: 2
Novi broj: 5
Novi broj: 3
Novi broj: 10
Novi broj: 11
suma = 21, proizvod = 30.000000