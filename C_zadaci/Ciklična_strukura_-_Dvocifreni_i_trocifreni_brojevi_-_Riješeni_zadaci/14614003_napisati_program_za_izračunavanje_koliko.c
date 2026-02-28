/*
 * ZADATAK 803 - 14614003
 * Napisati program za izračunavanje koliko ima (prebrojati) trocifrenih brojeva sa istim ciframa.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14614003.htm
 */

#include <stdio.h>

int main()
{
printf("Brojac trocifrenih brojeva - Iste cifre\n");  // naslov

int broj, j, d, s;          // deklarisanje varijabli
int br = 0;                 // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // jedinice
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice
if (s == d && d == j)   // iste cifre?
br = br + 1;        // da, uvecaj vrijednost brojaca
}

printf("Brojac: %d", br); // ispis

return 0;
}