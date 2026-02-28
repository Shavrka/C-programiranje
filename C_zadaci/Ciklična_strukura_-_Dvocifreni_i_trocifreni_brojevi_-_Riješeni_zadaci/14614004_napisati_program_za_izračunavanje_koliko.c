/*
 * ZADATAK 804 - 14614004
 * Napisati program za izračunavanje koliko ima (prebrojati) trocifrenih brojeva sa različitim prvom i trećom cifrom.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14614004.htm
 */

#include <stdio.h>

int main()
{
printf("Brojac trocifrenih brojeva - Razlicite prve i treca cifra\n");  // naslov

int broj, j, s;             // deklarisanje varijabli
int br = 0;                 // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // jedinice
s = broj / 100;         // stotice
if (s != j)             // različita prva i treća cifra?
br = br + 1;        // da, uvecaj vrijednost brojaca
}

printf("Brojac: %d", br); // ispis

return 0;
}