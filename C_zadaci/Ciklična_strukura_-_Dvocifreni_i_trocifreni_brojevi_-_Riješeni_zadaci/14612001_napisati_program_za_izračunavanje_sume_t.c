/*
 * ZADATAK 601 - 14612001
 * Napisati program za izračunavanje sume trocifrenih brojeva.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612001.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva\n");  // naslov
int broj;                   // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost

for (broj=100; broj <= 999; broj++) // za trocifrene brojeve radi
suma = suma + broj;     // uvecaj sumu

printf("Suma: %d", suma);  // ispis

return 0;
}

Ispis na ekranu:
Suma trocifrenih brojeva
Suma: 494550