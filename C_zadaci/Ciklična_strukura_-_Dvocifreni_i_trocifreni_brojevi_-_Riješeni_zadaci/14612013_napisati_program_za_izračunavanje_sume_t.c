/*
 * ZADATAK 613 - 14612013
 * Napisati program za izračunavanje sume trocifrenih brojeva koji nisu djeljivi sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612013.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva - nije djeljiv sa 3\n");  // naslov

int broj;                   // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost

for (broj=100; broj <= 999; broj++) // za trocifrene brojeve radi
if (broj % 3  != 0)             // nije djeljiv sa 3?
suma = suma + broj;         // da - nije djeljiv sa 3; uvecaj sumu

printf("Suma: %d", suma);   // ispis

return 0;
}