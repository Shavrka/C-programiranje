/*
 * ZADATAK 802 - 14614002
 * Napisati program za izračunavanje koliko ima (prebrojati) trocifrenih brojeva sa zadnjom cifrom 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14614002.htm
 */

#include <stdio.h>

int main()
{
printf("Brojac trocifrenih brojeva - Zadnja cifra 3\n");  // naslov

int broj;                   // deklarisanje varijabli
int br = 0;                 // pocetne vrijednost

for (broj=100; broj <= 999; broj++) // za trocifrene brojeve radi
if (broj % 10 == 3)     // zadnja cifra 3?
br = br + 1;        // da, uvecaj novu vrijednost brojaca

printf("Brojac: %d", br);   // ispis

return 0;
}