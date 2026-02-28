/*
 * ZADATAK 602 - 14612002
 * Napisati program za izračunavanje sume trocifrenih brojeva sa zadnjom cifrom 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612002.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva sa zadnjom cifrom 3\n");  // naslov

int broj;                   // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost

for (broj=100; broj <= 999; broj++)  // za trocifrene brojeve radi
if (broj % 10  == 3)   // zadnja cifra je 3?
suma = suma + broj; // uvecaj sumu

printf("Suma: %d", suma);  // ispis

return 0;
}