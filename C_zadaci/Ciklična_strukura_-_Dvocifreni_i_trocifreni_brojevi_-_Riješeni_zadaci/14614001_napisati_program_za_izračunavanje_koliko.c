/*
 * ZADATAK 801 - 14614001
 * Napisati program za izračunavanje koliko ima (prebrojati) trocifrenih brojeva.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14614001.htm
 */

#include <stdio.h>

int main()
{
printf("Brojac trocifrenih brojeva\n");  // naslov

int broj;                   // deklarisanje varijabli
int br = 0;                 // pocetne vrijednost

for (broj=100; broj <= 999; broj++) // za trocifrene brojeve radi
br = br + 1;          // jos jedan broj

printf("Brojac: %d", br); // ispis

return 0;
}