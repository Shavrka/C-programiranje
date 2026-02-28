/*
 * ZADATAK 612 - 14612012
 * Napisati program za izračunavanje sume trocifrenih brojeva djeljive sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612012.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifren broj - Suma - djeljiv sa 3\n");  // naslov

int broj;                   // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost

for (broj=100; broj <= 999; broj++) // za trocifrene brojeve radi
if (broj % 3  == 0)             // djeljiv sa 3?
suma = suma + broj;         // da, uvecaj sumu

printf("Suma = %d", suma);   // ispis

return 0;
}