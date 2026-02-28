/*
 * ZADATAK 610 - 14612010
 * Napisati program za izračunavanje sume trocifrenih brojeva djeljive sa 2 (parni).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612010.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva - djeljivih sa 2 - parni\n");  // naslov

int broj;                   // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost

for (broj=100; broj <= 999; broj++) // za trocifrene brojeve radi
if (broj % 2  == 0)             // djeljiv sa 2 - paran?
suma = suma + broj;         // da, paran; uvecaj sumu

printf("Suma: %d", suma);   // ispis

return 0;
}

Ispis na ekranu:
Suma trocifrenih brojeva - djeljivih sa 2 - parni
Suma: 247050